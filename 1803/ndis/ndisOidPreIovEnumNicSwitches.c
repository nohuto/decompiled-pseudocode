/*
 * XREFs of ndisOidPreIovEnumNicSwitches @ 0x1C006D960
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001A044 (ndisIovNicSwitchWithoutIovSupported.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ndisIovCopyNicSwitchInfo @ 0x1C006BF18 (ndisIovCopyNicSwitchInfo.c)
 */

char __fastcall ndisOidPreIovEnumNicSwitches(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // si
  __int64 v4; // rax
  KSPIN_LOCK *v5; // r14
  KIRQL v6; // al
  KIRQL v7; // r13
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  __int64 v10; // rax
  _DWORD *v11; // rax
  unsigned int v12; // r12d
  _QWORD *v13; // r15
  _DWORD *v14; // rbp
  unsigned int v15; // r14d
  __int64 v16; // rcx
  unsigned int v18; // [rsp+68h] [rbp+10h]

  v1 = *(_QWORD *)a1;
  v3 = 1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_q(0x13u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, a1);
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  if ( v1 )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
    {
      v4 = *(_QWORD *)(v1 + 4640);
      if ( !v4 || !*(_QWORD *)(v1 + 3584) || (*(_BYTE *)(v4 + 8) & 3) != 3 )
      {
LABEL_4:
        *(_DWORD *)(a1 + 40) = -1073741637;
        goto LABEL_19;
      }
    }
    v5 = (KSPIN_LOCK *)(v1 + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
    *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
    v7 = v6;
    v8 = *(_DWORD *)(v1 + 4720);
    *(_DWORD *)(v1 + 1856) = 2885107;
    v9 = 572 * v8 + 16;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 56LL) = v9;
    v10 = *(_QWORD *)(a1 + 32);
    v18 = v9;
    if ( v9 <= *(_DWORD *)(v10 + 48) )
    {
      v11 = *(_DWORD **)(v10 + 40);
      v12 = 0;
      *v11 = 1048960;
      v11[1] = 16;
      v11[2] = v8;
      v11[3] = 572;
      v13 = *(_QWORD **)(v1 + 4728);
      if ( v13 != (_QWORD *)(v1 + 4728) )
      {
        v14 = v11 + 4;
        v15 = v8;
        do
        {
          if ( v12 >= v15 )
            break;
          ndisIovCopyNicSwitchInfo(v14, (__int64)v13);
          v13 = (_QWORD *)*v13;
          v14 += 143;
          ++v12;
        }
        while ( v13 != (_QWORD *)(v1 + 4728) );
        v9 = v18;
        v5 = (KSPIN_LOCK *)(v1 + 96);
      }
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
      KeReleaseSpinLock(v5, v7);
      v16 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(v16 + 52) = v9;
    }
    else
    {
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v7);
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    v3 = 0;
  }
LABEL_19:
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qD(0x14u, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v1, *(_DWORD *)(a1 + 40));
  return v3;
}
