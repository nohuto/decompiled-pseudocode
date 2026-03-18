/*
 * XREFs of ACPIGpeBuildWakeMasks @ 0x1C001E600
 * Callers:
 *     ACPIGpeBuildWakeMasks @ 0x1C001E600 (ACPIGpeBuildWakeMasks.c)
 *     ACPITableLoadCallBack @ 0x1C002AD10 (ACPITableLoadCallBack.c)
 * Callees:
 *     ACPIGpeIndexToGpeRegister @ 0x1C001054C (ACPIGpeIndexToGpeRegister.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C0011260 (ACPIInitReferenceDeviceExtension.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C001E600 (ACPIGpeBuildWakeMasks.c)
 *     ACPIExtListEnumNext @ 0x1C001E750 (ACPIExtListEnumNext.c)
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
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  PKSPIN_LOCK v13; // r10
  _QWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  KSPIN_LOCK *v15; // [rsp+30h] [rbp-38h]
  KIRQL v16; // [rsp+38h] [rbp-30h]
  _QWORD *v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+50h] [rbp-18h]

  v1 = 0LL;
  v2 = (_QWORD **)(a1 + 752);
  v3 = 768LL;
  v14[0] = v2;
  v15 = 0LL;
  v4 = 0;
  v18 = 768LL;
  v5 = *v2;
  v19 = 0;
  v6 = (__int64)(v5 - 96);
  v14[1] = *v5;
  v7 = v5 - 96;
  v17 = v5 - 96;
  if ( v5 == v2 )
    v7 = 0LL;
  while ( (_QWORD **)(v6 + v3) != v2 )
  {
    if ( v4 == 1 )
    {
      ACPIInitReferenceDeviceExtension(v6);
      KeReleaseSpinLock(v13, v16);
    }
    ACPIGpeBuildWakeMasks(v7);
    if ( (v7[1] & 0x10000) != 0 && (v7[119] & 0x500000000LL) == 0 )
    {
      v11 = (unsigned int)ACPIGpeIndexToGpeRegister(*((unsigned int *)v7 + 114), v8, v9);
      v12 = 1 << (v7[57] & 7);
      if ( ((unsigned __int8)v12 & *((_BYTE *)GpeEnable + v11)) != 0 )
      {
        if ( (v7[1] & 0x800000000LL) != 0 )
        {
          *((_BYTE *)GpeSpecialHandler + v11) |= v12;
          *((_BYTE *)GpeWakeHandler + v11) &= ~(_BYTE)v12;
        }
        else if ( ((unsigned __int8)v12 & *((_BYTE *)GpeSpecialHandler + v11)) == 0 )
        {
          *((_BYTE *)GpeWakeHandler + v11) |= v12;
        }
      }
    }
    v10 = ACPIExtListEnumNext(v14);
    v4 = v19;
    v7 = (_QWORD *)v10;
    v3 = v18;
    v6 = (__int64)v17;
    v1 = v15;
    v2 = (_QWORD **)v14[0];
  }
  if ( v4 )
    KeReleaseSpinLock(v1, v16);
}
