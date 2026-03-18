/*
 * XREFs of UsbhBuildTopologyAddress @ 0x1C0020FFC
 * Callers:
 *     UsbhFdoReturnTopologyAddress @ 0x1C0020818 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004DEE8 (UsbhGetDeviceNodeInfo.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

__int64 __fastcall UsbhBuildTopologyAddress(__int64 a1, _OWORD *a2, __int16 a3)
{
  _DWORD *v5; // rax
  __int64 v7; // rax
  _WORD *i; // rcx

  v5 = FdoExt(a1);
  *a2 = *(_OWORD *)(v5 + 1298);
  a2[1] = *(_OWORD *)(v5 + 1302);
  if ( *((_WORD *)a2 + 8) )
  {
    v7 = 0LL;
    for ( i = (_WORD *)a2 + 9; *i; ++i )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 5 )
        return 0LL;
    }
    *((_WORD *)a2 + v7 + 9) = a3;
  }
  else
  {
    *((_WORD *)a2 + 8) = a3;
  }
  return 0LL;
}
