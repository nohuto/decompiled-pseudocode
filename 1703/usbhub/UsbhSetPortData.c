/*
 * XREFs of UsbhSetPortData @ 0x1C0018F04
 * Callers:
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C000B0C0 (UsbhRefPdo.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhGetPortData @ 0x1C0016C70 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

__int64 __fastcall UsbhSetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rbx
  _DWORD *v10; // rax
  __int64 v11; // rcx

  Log(a1, 256, 1936745588, a2, a3);
  v6 = PdoExt(v5);
  Log(a1, 256, 1936745552, a2, *((unsigned __int16 *)v6 + 710));
  v7 = PdoExt(a2);
  result = UsbhGetPortData(a1, *((_WORD *)v7 + 710));
  v9 = result;
  if ( result )
  {
    v10 = PdoExt(a2);
    KeResetEvent((PRKEVENT)(v10 + 322));
    result = UsbhRefPdo(v11, a2, 0LL, 1279349827);
    *(_QWORD *)(v9 + 392) = result;
    if ( result )
    {
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 1);
      result = (__int64)PdoExt(result);
      *(_DWORD *)(result + 1416) |= 8u;
    }
    else
    {
      _InterlockedExchange((volatile __int32 *)(v9 + 428), 0);
    }
  }
  return result;
}
