/*
 * XREFs of HMCreateHandleForObject @ 0x1C008B430
 * Callers:
 *     ?OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C004EA80 (-OnRIMDeviceCreated@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004F7D0 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0075754 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 __fastcall HMCreateHandleForObject(__int64 a1, char a2)
{
  bool i; // zf
  __int64 *v5; // rcx
  __int64 v6; // r8
  char *v7; // rdi
  char *v8; // rdx
  bool v9; // cc
  __int64 v11; // rbx

  if ( a2 == 19 || a2 == 22 )
  {
    for ( i = a1 == 0; ; i = (unsigned int)HMGrowHandleTable() == 0 )
    {
      if ( i )
        return 0LL;
      if ( qword_1C018AE28 && a2 != 1 )
        break;
      if ( qword_1C018AE20 )
      {
        v5 = &qword_1C018AE20;
        goto LABEL_7;
      }
    }
    v5 = &qword_1C018AE28;
LABEL_7:
    v6 = *v5;
    v7 = (char *)gpKernelHandleTable + 16 * *v5;
    v8 = (char *)qword_1C0189E38 + 32 * *v5;
    v9 = (unsigned int)*v5 <= giheLast;
    *v5 = *(_QWORD *)v7;
    if ( !v9 )
      giheLast = v6;
    v8[24] = a2;
    *(_QWORD *)v7 = a1;
    *(_QWORD *)a1 = (int)v6 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C0189E38
                                                                     + v6 * (unsigned int)dword_1C0189E40
                                                                     + 26) << 16);
    if ( ++giheCount > (unsigned int)giheCountPeak )
      giheCountPeak = giheCount;
    if ( a2 == 19 )
    {
      ObReferenceObjectByPointer(*(PVOID *)(a1 + 32), 3u, ExRawInputManagerObjectType, 0);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 16);
      ObReferenceObjectByPointer(*(PVOID *)(v11 + 32), 3u, ExRawInputManagerObjectType, 0);
      ++*(_DWORD *)(v11 + 8);
    }
    return *(_QWORD *)v7;
  }
  return 0LL;
}
