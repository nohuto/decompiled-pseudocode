/*
 * XREFs of NtGdiResetDC @ 0x1C013CD50
 * Callers:
 *     <none>
 * Callees:
 *     GreResetDCInternal @ 0x1C013CE80 (GreResetDCInternal.c)
 */

__int64 __fastcall NtGdiResetDC(HDC a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned int v11; // ebx
  int v13; // [rsp+34h] [rbp-44h]

  v8 = 0LL;
  v9 = 0LL;
  if ( a2 && (v10 = CaptureDEVMODEW(a2), (v8 = v10) == 0) )
  {
    v11 = 1;
  }
  else
  {
    v11 = 1;
    LODWORD(v10) = 1;
  }
  if ( !(_DWORD)v10 || a4 && (v9 = CaptureDriverInfo2W(a4)) == 0 )
    v11 = 0;
  if ( v11 )
  {
    v11 = GreResetDCInternal(a1, a5);
    if ( v11 )
    {
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v13;
    }
  }
  if ( v8 )
    FreeThreadBufferWithTag(v8);
  vFreeDriverInfo2(v9);
  return v11;
}
