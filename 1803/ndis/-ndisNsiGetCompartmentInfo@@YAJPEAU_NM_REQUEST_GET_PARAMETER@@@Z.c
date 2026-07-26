/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0008D00
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0009160 (NdisGetSessionCompartmentId.c)
 *     ndisIfFindCompartmentBlock @ 0x1C0009198 (ndisIfFindCompartmentBlock.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C002243C (ndisIsCompartmentAccessibleByClient.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // r14d
  struct _NM_REQUEST_GET_PARAMETER *v6; // rsi
  char v7; // r15
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v9; // r13d
  _DWORD *ThreadProperty; // rax
  _DWORD *v11; // rcx
  unsigned int SessionCompartmentId; // ebx
  PACCESS_TOKEN v13; // rax
  void *v14; // r15
  unsigned int CurrentProcessSessionId; // eax
  KIRQL v16; // al
  _LIST_ENTRY *v17; // rdx
  KIRQL v18; // r8
  _LIST_ENTRY *i; // rax
  unsigned int Flink; // ecx
  KIRQL v21; // al
  __int64 v22; // r8
  int v23; // ecx
  KIRQL v24; // r11
  __int64 CompartmentBlock; // rax
  unsigned int v26; // ebx
  int v27; // r12d
  char v28; // r13
  char *v29; // rsi
  int v30; // r15d
  int v31; // eax
  unsigned int v32; // ebx
  KIRQL v33; // bl
  NTSTATUS v35; // ebx
  int v36; // ecx
  _LIST_ENTRY *v37; // rax
  __int64 v38; // rdx
  struct _KEVENT *v39; // rcx
  char v40; // [rsp+20h] [rbp-40h]
  BOOLEAN EffectiveOnly; // [rsp+21h] [rbp-3Fh] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+22h] [rbp-3Eh] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+24h] [rbp-3Ch] BYREF
  PVOID TokenInformation; // [rsp+28h] [rbp-38h] BYREF
  struct _NM_REQUEST_GET_PARAMETER *v45; // [rsp+38h] [rbp-28h]
  __int64 v46; // [rsp+40h] [rbp-20h] BYREF
  __int128 v47; // [rsp+48h] [rbp-18h]

  v4 = 0LL;
  v45 = a1;
  v5 = 0;
  v6 = a1;
  v7 = 0;
  v40 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(134LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a4);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v6 + 6) == 4 && *((_DWORD *)v6 + 12) && *((_QWORD *)v6 + 5) )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = **((_DWORD **)v6 + 2);
    v46 = 0LL;
    v47 = 0uLL;
    ThreadProperty = PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
    v11 = ThreadProperty;
    if ( ThreadProperty )
    {
      SessionCompartmentId = *ThreadProperty;
      LODWORD(v46) = ThreadProperty[1];
      HIDWORD(v46) = SessionCompartmentId;
      ObfDereferenceObject(ThreadProperty);
      LODWORD(ThreadProperty) = SessionCompartmentId;
    }
    else
    {
      SessionCompartmentId = 0;
      v46 = 0LL;
    }
    if ( !(_DWORD)ThreadProperty )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11);
      }
      else
      {
        v13 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
        v14 = v13;
        if ( v13
          && (v35 = SeQueryInformationToken(v13, TokenSessionId, &TokenInformation),
              PsDereferenceImpersonationToken(v14),
              v35 >= 0) )
        {
          CurrentProcessSessionId = (unsigned int)TokenInformation;
        }
        else
        {
          CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
        }
        v7 = 0;
      }
      SessionCompartmentId = NdisGetSessionCompartmentId(CurrentProcessSessionId);
      HIDWORD(v46) = SessionCompartmentId;
    }
    v16 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    v17 = 0LL;
    v18 = v16;
    for ( i = ndisIfCompartmentList.Flink; i != &ndisIfCompartmentList; i = i->Flink )
    {
      Flink = (unsigned int)i[1].Flink;
      if ( Flink == SessionCompartmentId )
      {
        v17 = i;
        break;
      }
      if ( Flink > SessionCompartmentId )
        break;
    }
    v47 = *(__int128 *)((char *)&v17[105] + 4);
    KeReleaseSpinLock(&ndisIfListLock, v18);
    v21 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    v23 = *((_DWORD *)v6 + 14);
    v24 = v21;
    if ( v23 )
    {
      v36 = v23 - 1;
      if ( !v36 )
      {
        v9 = 0;
        goto LABEL_59;
      }
      if ( v36 == 1 )
      {
LABEL_59:
        while ( 1 )
        {
          v37 = ndisIfCompartmentList.Flink;
          v4 = 0LL;
          while ( v37 != &ndisIfCompartmentList )
          {
            if ( LODWORD(v37[1].Flink) > v9 )
            {
              v4 = (__int64)v37;
              break;
            }
            v37 = v37->Flink;
          }
          if ( !v4 )
            break;
          v9 = *(_DWORD *)(v4 + 16);
          LOBYTE(v22) = 1;
          if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(v4, &v46, v22) )
            goto LABEL_21;
        }
      }
      else
      {
        v5 = -1073741808;
      }
    }
    else
    {
      CompartmentBlock = ndisIfFindCompartmentBlock(v9);
      v4 = CompartmentBlock;
      if ( CompartmentBlock )
      {
        if ( SessionCompartmentId != *(_DWORD *)(CompartmentBlock + 16) )
        {
          v38 = v47 - *(_QWORD *)(CompartmentBlock + 1684);
          if ( (_QWORD)v47 == *(_QWORD *)(CompartmentBlock + 1684) )
            v38 = *((_QWORD *)&v47 + 1) - *(_QWORD *)(CompartmentBlock + 1692);
          if ( v38 && ((*(_DWORD *)(CompartmentBlock + 1680) & 2) != 0 || SessionCompartmentId != 1) )
            v4 = 0LL;
        }
LABEL_21:
        if ( v4 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 44));
          v7 = 1;
          v40 = 1;
          **((_DWORD **)v6 + 2) = *(_DWORD *)(v4 + 16);
        }
      }
    }
    KeReleaseSpinLock(&ndisIfListLock, v24);
    if ( v5 >= 0 )
    {
      if ( v4 )
      {
        if ( *((_DWORD *)v6 + 8) )
        {
          v5 = -1073741808;
        }
        else
        {
          v26 = *((_DWORD *)v6 + 13);
          v27 = *((_DWORD *)v6 + 12);
          if ( *((_QWORD *)v6 + 5) )
          {
            v28 = 0;
            if ( v27 > 0 )
            {
              v29 = (char *)*((_QWORD *)v6 + 5);
              while ( 1 )
              {
                if ( v28 )
                {
LABEL_40:
                  v6 = v45;
                  v7 = v40;
                  break;
                }
                if ( v26 <= 0x234 )
                {
                  if ( v26 == 564 )
                  {
                    v31 = 516;
                    v30 = 1080;
                  }
                  else if ( v26 )
                  {
                    switch ( v26 )
                    {
                      case 8u:
                        v31 = 8;
                        v30 = 16;
                        break;
                      case 0x10u:
                        v30 = 32;
                        goto LABEL_36;
                      case 0x20u:
                        v30 = 48;
LABEL_36:
                        v31 = 16;
                        break;
                      case 0x30u:
                        v31 = 516;
                        v30 = 564;
                        break;
                      default:
LABEL_91:
                        v28 = 1;
                        goto LABEL_39;
                    }
                  }
                  else
                  {
                    v31 = 4;
                    v30 = 8;
                  }
                }
                else
                {
                  switch ( v26 )
                  {
                    case 0x438u:
                      v30 = 1096;
                      goto LABEL_36;
                    case 0x448u:
                      v31 = 516;
                      v30 = 1616;
                      break;
                    case 0x650u:
                      v31 = 4;
                      v30 = 1620;
                      break;
                    case 0x654u:
                      v30 = 1636;
                      v28 = 1;
                      goto LABEL_36;
                    default:
                      goto LABEL_91;
                  }
                }
                if ( v27 < v31 )
                  goto LABEL_91;
                memmove(v29, (const void *)(v4 + v26 + 64LL), (unsigned int)v31);
                v29 += v30 - v26;
                v27 += v26 - v30;
                v26 = v30;
LABEL_39:
                if ( v27 <= 0 )
                  goto LABEL_40;
              }
            }
            v32 = v26 - *((_DWORD *)v6 + 13);
            *((_DWORD *)v6 + 12) = v32;
            if ( !v32 )
              v5 = -1073741811;
          }
          else
          {
            *((_DWORD *)v6 + 12) = 0;
          }
        }
      }
      else
      {
        v5 = *((_DWORD *)v6 + 14) != 0 ? -2147483622 : -1073741772;
      }
    }
    if ( v7 )
    {
      v33 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 44), 0xFFFFFFFF) == 1 )
      {
        v39 = *(struct _KEVENT **)(v4 + 1712);
        if ( v39 )
          KeSetEvent(v39, 0, 0);
      }
      KeReleaseSpinLock(&ndisIfListLock, v33);
    }
  }
  else
  {
    v5 = -1073741808;
  }
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(135LL, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v6, (unsigned int)v5);
  return (unsigned int)v5;
}
