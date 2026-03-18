/*
 * XREFs of _GetDeviceRects @ 0x1C012E660
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetDeviceRects(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  _OWORD *v7; // rsi
  __int64 v8; // rax

  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v7 = (_OWORD *)a2;
  if ( v4 )
  {
    LOBYTE(a2) = 19;
    v8 = HMValidateHandleNoSecure(v4, a2, (__int64)a3, a4);
    if ( v8 )
    {
      v5 = 1;
      *v7 = *(_OWORD *)(*(_QWORD *)(v8 + 472) + 160LL);
      *a3 = *(_OWORD *)(*(_QWORD *)(v8 + 472) + 176LL);
    }
  }
  return v5;
}
