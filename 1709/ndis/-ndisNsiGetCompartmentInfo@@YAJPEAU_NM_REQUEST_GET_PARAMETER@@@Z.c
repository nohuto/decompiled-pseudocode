/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C001A7E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C00202F0 (ndisIsCompartmentAccessibleByClient.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0067B44 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  int v1; // r14d
  _LIST_ENTRY *v2; // rdi
  char v3; // r15
  struct _NM_REQUEST_GET_PARAMETER *v4; // rsi
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v6; // r13d
  unsigned int *ThreadProperty; // rax
  unsigned int *v8; // rcx
  unsigned int v9; // ebx
  PACCESS_TOKEN v10; // rax
  void *v11; // r15
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // r15d
  KIRQL v14; // al
  _LIST_ENTRY *v15; // rdx
  KIRQL v16; // r8
  _LIST_ENTRY *i; // rax
  unsigned int Flink; // ecx
  KIRQL v19; // al
  __int64 v20; // r8
  int v21; // ecx
  KIRQL v22; // r11
  _LIST_ENTRY *j; // rax
  unsigned int v24; // ecx
  unsigned int v25; // ebx
  int v26; // r12d
  char v27; // r13
  char *v28; // rsi
  int v29; // r15d
  int v30; // eax
  unsigned int v31; // ebx
  KIRQL v32; // bl
  NTSTATUS v34; // ebx
  int v35; // ecx
  _LIST_ENTRY *v36; // rax
  KIRQL v37; // r8
  unsigned __int64 v38; // rcx
  struct _KEVENT *v39; // rcx
  char v40; // [rsp+20h] [rbp-50h]
  BOOLEAN EffectiveOnly; // [rsp+21h] [rbp-4Fh] BYREF
  BOOLEAN CopyOnOpen[2]; // [rsp+22h] [rbp-4Eh] BYREF
  int v43; // [rsp+24h] [rbp-4Ch]
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+28h] [rbp-48h] BYREF
  PVOID TokenInformation; // [rsp+30h] [rbp-40h] BYREF
  struct _NM_REQUEST_GET_PARAMETER *v46; // [rsp+40h] [rbp-30h]
  __int64 v47; // [rsp+48h] [rbp-28h] BYREF
  __int128 v48; // [rsp+50h] [rbp-20h]

  v1 = 0;
  v46 = a1;
  v2 = 0LL;
  v43 = 0;
  v3 = 0;
  v4 = a1;
  v40 = 0;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(134LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)v4 + 6) != 4 || !*((_DWORD *)v4 + 12) || !*((_QWORD *)v4 + 5) )
  {
    v1 = -1073741808;
    goto LABEL_54;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = **((_DWORD **)v4 + 2);
  v47 = 0LL;
  v48 = 0uLL;
  ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  v8 = ThreadProperty;
  if ( ThreadProperty )
  {
    v9 = *ThreadProperty;
    LODWORD(v47) = ThreadProperty[1];
    HIDWORD(v47) = v9;
    ObfDereferenceObject(ThreadProperty);
  }
  else
  {
    v9 = 0;
    v47 = 0LL;
  }
  if ( !v9 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
    }
    else
    {
      v10 = PsReferenceImpersonationToken(CurrentThread, CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
      v11 = v10;
      if ( v10 )
      {
        v34 = SeQueryInformationToken(v10, TokenSessionId, &TokenInformation);
        PsDereferenceImpersonationToken(v11);
        if ( v34 >= 0 )
        {
          ThreadSessionId = (unsigned int)TokenInformation;
          goto LABEL_13;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_13:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < ndisCmSessionCount )
    {
      v9 = 0;
      v37 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
      if ( ThreadSessionId < ndisCmSessionCount )
        v9 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
      KeReleaseSpinLock(&ndisCmSessionLock, v37);
      if ( !v9 )
        v9 = 1;
    }
    else
    {
      v9 = 1;
    }
    HIDWORD(v47) = v9;
    v3 = 0;
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v15 = 0LL;
  v16 = v14;
  for ( i = ndisIfCompartmentList.Flink; i != &ndisIfCompartmentList; i = i->Flink )
  {
    Flink = (unsigned int)i[1].Flink;
    if ( Flink == v9 )
    {
      v15 = i;
      break;
    }
    if ( Flink > v9 )
      break;
  }
  v48 = *(__int128 *)((char *)&v15[105] + 4);
  KeReleaseSpinLock(&ndisIfListLock, v16);
  v19 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v21 = *((_DWORD *)v4 + 14);
  v22 = v19;
  if ( v21 )
  {
    v35 = v21 - 1;
    if ( !v35 )
    {
      v6 = 0;
      goto LABEL_67;
    }
    if ( v35 == 1 )
    {
LABEL_67:
      while ( 1 )
      {
        v36 = ndisIfCompartmentList.Flink;
        v2 = 0LL;
        while ( v36 != &ndisIfCompartmentList )
        {
          if ( LODWORD(v36[1].Flink) > v6 )
          {
            v2 = v36;
            break;
          }
          v36 = v36->Flink;
        }
        if ( !v2 )
          break;
        v6 = (unsigned int)v2[1].Flink;
        LOBYTE(v20) = 1;
        if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(v2, &v47, v20) )
          goto LABEL_29;
      }
    }
    else
    {
      v1 = -1073741808;
      v43 = -1073741808;
    }
  }
  else
  {
    for ( j = ndisIfCompartmentList.Flink; j != &ndisIfCompartmentList; j = j->Flink )
    {
      v24 = (unsigned int)j[1].Flink;
      if ( v24 == v6 )
      {
        v2 = j;
        break;
      }
      if ( v24 > v6 )
        break;
    }
    if ( v2 )
    {
      if ( v9 != LODWORD(v2[1].Flink) )
      {
        v38 = v48 - *(unsigned __int64 *)((char *)&v2[105].Flink + 4);
        if ( (_LIST_ENTRY *)v48 == *(_LIST_ENTRY **)((char *)&v2[105].Flink + 4) )
          v38 = *((_QWORD *)&v48 + 1) - *(unsigned __int64 *)((char *)&v2[105].Blink + 4);
        if ( v38 && (((__int64)v2[105].Flink & 2) != 0 || v9 != 1) )
          v2 = 0LL;
      }
LABEL_29:
      if ( v2 )
      {
        _InterlockedAdd((volatile signed __int32 *)&v2[2].Blink + 1, 1u);
        v3 = 1;
        v40 = 1;
        **((_DWORD **)v4 + 2) = v2[1].Flink;
      }
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v22);
  if ( v1 >= 0 )
  {
    if ( v2 )
    {
      if ( *((_DWORD *)v4 + 8) )
      {
        v1 = -1073741808;
      }
      else
      {
        v25 = *((_DWORD *)v4 + 13);
        v26 = *((_DWORD *)v4 + 12);
        if ( *((_QWORD *)v4 + 5) )
        {
          v27 = 0;
          if ( v26 > 0 )
          {
            v28 = (char *)*((_QWORD *)v4 + 5);
            while ( 1 )
            {
              if ( v27 )
              {
LABEL_48:
                v4 = v46;
                v1 = v43;
                v3 = v40;
                break;
              }
              if ( v25 <= 0x234 )
              {
                if ( v25 == 564 )
                {
                  v30 = 516;
                  v29 = 1080;
                }
                else if ( v25 )
                {
                  switch ( v25 )
                  {
                    case 8u:
                      v30 = 8;
                      v29 = 16;
                      break;
                    case 0x10u:
                      v29 = 32;
                      goto LABEL_44;
                    case 0x20u:
                      v29 = 48;
LABEL_44:
                      v30 = 16;
                      break;
                    case 0x30u:
                      v30 = 516;
                      v29 = 564;
                      break;
                    default:
LABEL_86:
                      v27 = 1;
                      goto LABEL_47;
                  }
                }
                else
                {
                  v30 = 4;
                  v29 = 8;
                }
              }
              else
              {
                switch ( v25 )
                {
                  case 0x438u:
                    v29 = 1096;
                    goto LABEL_44;
                  case 0x448u:
                    v30 = 516;
                    v29 = 1616;
                    break;
                  case 0x650u:
                    v30 = 4;
                    v29 = 1620;
                    break;
                  case 0x654u:
                    v29 = 1636;
                    v27 = 1;
                    goto LABEL_44;
                  default:
                    goto LABEL_86;
                }
              }
              if ( v26 < v30 )
                goto LABEL_86;
              memmove(v28, (char *)&v2[4] + v25, (unsigned int)v30);
              v28 += v29 - v25;
              v26 += v25 - v29;
              v25 = v29;
LABEL_47:
              if ( v26 <= 0 )
                goto LABEL_48;
            }
          }
          v31 = v25 - *((_DWORD *)v4 + 13);
          *((_DWORD *)v4 + 12) = v31;
          if ( !v31 )
            v1 = -1073741811;
        }
        else
        {
          *((_DWORD *)v4 + 12) = 0;
        }
      }
    }
    else
    {
      v1 = *((_DWORD *)v4 + 14) != 0 ? -2147483622 : -1073741772;
    }
  }
  if ( v3 )
  {
    v32 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&v2[2].Blink + 1, 0xFFFFFFFF) == 1 )
    {
      v39 = (struct _KEVENT *)v2[107].Flink;
      if ( v39 )
        KeSetEvent(v39, 0, 0);
    }
    KeReleaseSpinLock(&ndisIfListLock, v32);
  }
LABEL_54:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(135LL, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, v4, (unsigned int)v1);
  return (unsigned int)v1;
}
