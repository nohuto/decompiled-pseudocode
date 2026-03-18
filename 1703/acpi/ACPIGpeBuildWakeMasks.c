/*
 * XREFs of ACPIGpeBuildWakeMasks @ 0x1C0013820
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C0013820 (ACPIGpeBuildWakeMasks.c)
 *     ACPITableLoadCallBack @ 0x1C0029E20 (ACPITableLoadCallBack.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C00070E8 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0013820 (ACPIGpeBuildWakeMasks.c)
 *     ACPIExtListEnumNext @ 0x1C0013970 (ACPIExtListEnumNext.c)
 *     ACPIGpeIndexToGpeRegister @ 0x1C002029C (ACPIGpeIndexToGpeRegister.c)
 */

void __fastcall ACPIGpeBuildWakeMasks(__int64 a1)
{
  KSPIN_LOCK *v1; // r10
  _QWORD **v2; // rcx
  __int64 v3; // r8
  int v4; // r9d
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // r8d
  PKSPIN_LOCK v11; // r10
  _QWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  KSPIN_LOCK *v13; // [rsp+30h] [rbp-38h]
  KIRQL v14; // [rsp+38h] [rbp-30h]
  _QWORD *v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+50h] [rbp-18h]

  v1 = 0LL;
  v2 = (_QWORD **)(a1 + 752);
  v3 = 768LL;
  v12[0] = v2;
  v13 = 0LL;
  v4 = 0;
  v16 = 768LL;
  v5 = *v2;
  v17 = 0;
  v6 = (__int64)(v5 - 96);
  v12[1] = *v5;
  v7 = v5 - 96;
  v15 = v5 - 96;
  if ( v5 == v2 )
    v7 = 0LL;
  while ( (_QWORD **)(v6 + v3) != v2 )
  {
    if ( v4 == 1 )
    {
      ACPIInitReferenceDeviceExtension(v6);
      KeReleaseSpinLock(v11, v14);
    }
    ACPIGpeBuildWakeMasks(v7);
    if ( (v7[1] & 0x10000) != 0 && (v7[119] & 0x500000000LL) == 0 )
    {
      v9 = (unsigned int)ACPIGpeIndexToGpeRegister(*((unsigned int *)v7 + 114));
      v10 = 1 << (v7[57] & 7);
      if ( ((unsigned __int8)v10 & *((_BYTE *)GpeEnable + v9)) != 0 )
      {
        if ( (v7[1] & 0x800000000LL) != 0 )
        {
          *((_BYTE *)GpeSpecialHandler + v9) |= v10;
          *((_BYTE *)GpeWakeHandler + v9) &= ~(_BYTE)v10;
        }
        else if ( ((unsigned __int8)v10 & *((_BYTE *)GpeSpecialHandler + v9)) == 0 )
        {
          *((_BYTE *)GpeWakeHandler + v9) |= v10;
        }
      }
    }
    v8 = ACPIExtListEnumNext(v12);
    v4 = v17;
    v7 = (_QWORD *)v8;
    v3 = v16;
    v6 = (__int64)v15;
    v1 = v13;
    v2 = (_QWORD **)v12[0];
  }
  if ( v4 )
    KeReleaseSpinLock(v1, v14);
}
