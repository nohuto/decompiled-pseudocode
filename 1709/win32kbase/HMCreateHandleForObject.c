/*
 * XREFs of HMCreateHandleForObject @ 0x1C0091B60
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C0019380 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C001A200 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0006C54 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(__int64 a1, char a2)
{
  bool i; // zf
  __int64 *v5; // rcx
  __int64 v6; // r8
  _QWORD *v7; // r14
  char *v8; // rdx
  bool v9; // cc
  __int64 v10; // rsi
  __int64 v12; // rbx

  if ( a2 == 19 || a2 == 22 )
  {
    for ( i = a1 == 0; ; i = (unsigned int)HMGrowHandleTable() == 0 )
    {
      if ( i )
        return 0LL;
      if ( qword_1C018FA78 && a2 != 1 )
        break;
      if ( qword_1C018FA70 )
      {
        v5 = &qword_1C018FA70;
        goto LABEL_7;
      }
    }
    v5 = &qword_1C018FA78;
LABEL_7:
    v6 = *v5;
    v7 = gpKernelHandleTable;
    v8 = (char *)qword_1C018E9B8 + 32 * *v5;
    v9 = (unsigned int)*v5 <= giheLast;
    v10 = 3 * *v5;
    *v5 = *((_QWORD *)gpKernelHandleTable + 3 * *v5);
    if ( !v9 )
      giheLast = v6;
    v8[24] = a2;
    v7[v10] = a1;
    *(_QWORD *)a1 = (int)v6 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C018E9B8
                                                                     + v6 * (unsigned int)dword_1C018E9C0
                                                                     + 26) << 16);
    if ( ++giheCount > (unsigned int)giheCountPeak )
      giheCountPeak = giheCount;
    if ( a2 == 19 )
    {
      ObReferenceObjectByPointer(*(PVOID *)(a1 + 32), 3u, ExRawInputManagerObjectType, 0);
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 16);
      ObReferenceObjectByPointer(*(PVOID *)(v12 + 32), 3u, ExRawInputManagerObjectType, 0);
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    }
    v7[v10 + 2] = 0LL;
    return v7[v10];
  }
  return 0LL;
}
