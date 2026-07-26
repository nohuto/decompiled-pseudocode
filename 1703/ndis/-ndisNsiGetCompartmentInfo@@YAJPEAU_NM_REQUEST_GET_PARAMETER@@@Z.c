/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C000CFF0
 * Callers:
 *     <none>
 * Callees:
 *     ndisGetNsiClientInfo @ 0x1C000CE98 (ndisGetNsiClientInfo.c)
 *     ndisIfFindCompartmentBlock @ 0x1C000CFB0 (ndisIfFindCompartmentBlock.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D334 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D34C (ndisIsCompartmentAccessibleByClient.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  __int64 v1; // rbp
  int v3; // esi
  unsigned int v4; // ebx
  KIRQL v5; // al
  __int64 v6; // r8
  int v7; // ecx
  KIRQL v8; // r14
  __int64 CompartmentBlock; // rax
  __int64 v10; // r8
  char *v11; // r13
  unsigned int v12; // ebx
  int v13; // r15d
  char v14; // r12
  int v15; // r14d
  int v16; // eax
  unsigned int v17; // ebx
  KIRQL v18; // bl
  int v20; // ecx
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v22; // rax
  char v23; // [rsp+20h] [rbp-58h]
  _BYTE v24[24]; // [rsp+28h] [rbp-50h] BYREF

  v1 = 0LL;
  v3 = 0;
  v23 = 0;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(134LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) != 4 || !*((_DWORD *)a1 + 12) || !*((_QWORD *)a1 + 5) )
  {
    v3 = -1073741808;
    goto LABEL_31;
  }
  v4 = **((_DWORD **)a1 + 2);
  ndisGetNsiClientInfo((__int64)v24);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v7 = *((_DWORD *)a1 + 14);
  v8 = v5;
  if ( !v7 )
  {
    CompartmentBlock = (__int64)ndisIfFindCompartmentBlock(v4);
    v1 = CompartmentBlock;
    if ( CompartmentBlock )
    {
      LOBYTE(v10) = 1;
      v1 = -(__int64)((unsigned __int8)ndisIsCompartmentAccessibleByClient(CompartmentBlock, v24, v10) != 0) & CompartmentBlock;
LABEL_9:
      if ( v1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v1 + 44));
        v23 = 1;
        **((_DWORD **)a1 + 2) = *(_DWORD *)(v1 + 16);
      }
    }
    goto LABEL_11;
  }
  v20 = v7 - 1;
  if ( !v20 )
  {
    v4 = 0;
LABEL_42:
    Flink = ndisIfCompartmentList.Flink;
    while ( 1 )
    {
      v1 = 0LL;
      v22 = Flink;
      if ( Flink != &ndisIfCompartmentList )
      {
        while ( LODWORD(v22[1].Flink) <= v4 )
        {
          v22 = v22->Flink;
          if ( v22 == &ndisIfCompartmentList )
            goto LABEL_46;
        }
        v1 = (__int64)v22;
      }
LABEL_46:
      if ( !v1 )
        goto LABEL_11;
      v4 = *(_DWORD *)(v1 + 16);
      LOBYTE(v6) = 1;
      if ( (unsigned __int8)ndisIsCompartmentAccessibleByClient(v1, v24, v6) )
        goto LABEL_9;
    }
  }
  if ( v20 == 1 )
    goto LABEL_42;
  v3 = -1073741808;
LABEL_11:
  KeReleaseSpinLock(&ndisIfListLock, v8);
  if ( v3 >= 0 )
  {
    if ( v1 )
    {
      if ( *((_DWORD *)a1 + 8) )
      {
        v3 = -1073741808;
      }
      else
      {
        v11 = (char *)*((_QWORD *)a1 + 5);
        v12 = *((_DWORD *)a1 + 13);
        v13 = *((_DWORD *)a1 + 12);
        if ( v11 )
        {
          v14 = 0;
          while ( v13 > 0 )
          {
            if ( v14 )
              break;
            if ( v12 <= 0x234 )
            {
              if ( v12 == 564 )
              {
                v16 = 516;
                v15 = 1080;
              }
              else if ( v12 )
              {
                switch ( v12 )
                {
                  case 8u:
                    v16 = 8;
                    v15 = 16;
                    break;
                  case 0x10u:
                    v15 = 32;
                    goto LABEL_23;
                  case 0x20u:
                    v15 = 48;
LABEL_23:
                    v16 = 16;
                    break;
                  case 0x30u:
                    v16 = 516;
                    v15 = 564;
                    break;
                  default:
LABEL_61:
                    v14 = 1;
                    continue;
                }
              }
              else
              {
                v16 = 4;
                v15 = 8;
              }
            }
            else
            {
              switch ( v12 )
              {
                case 0x438u:
                  v15 = 1096;
                  goto LABEL_23;
                case 0x448u:
                  v16 = 516;
                  v15 = 1616;
                  break;
                case 0x650u:
                  v16 = 4;
                  v15 = 1620;
                  break;
                case 0x654u:
                  v15 = 1636;
                  v14 = 1;
                  goto LABEL_23;
                default:
                  goto LABEL_61;
              }
            }
            if ( v13 < v16 )
              goto LABEL_61;
            memmove(v11, (const void *)(v1 + v12 + 64LL), (unsigned int)v16);
            v11 += v15 - v12;
            v13 += v12 - v15;
            v12 = v15;
          }
          v17 = v12 - *((_DWORD *)a1 + 13);
          *((_DWORD *)a1 + 12) = v17;
          if ( !v17 )
            v3 = -1073741811;
        }
        else
        {
          *((_DWORD *)a1 + 12) = 0;
        }
      }
    }
    else
    {
      v3 = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
    }
  }
  if ( v23 )
  {
    v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    COMPARTMENTBLOCK_DECREMENT_REF(v1);
    KeReleaseSpinLock(&ndisIfListLock, v18);
  }
LABEL_31:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(135LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, (unsigned int)v3);
  return (unsigned int)v3;
}
