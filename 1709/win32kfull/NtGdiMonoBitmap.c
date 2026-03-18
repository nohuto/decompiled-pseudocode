/*
 * XREFs of NtGdiMonoBitmap @ 0x1C0292050
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEAAHXZ @ 0x1C009BA0C (-bIsMonochrome@XEPALOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall NtGdiMonoBitmap(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int IsMonochrome; // ebx
  __int64 v4; // rdx
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a2) = 5;
  v2 = HmgShareLockCheck(a1, a2);
  IsMonochrome = 0;
  if ( v2 )
  {
    v6 = *(_QWORD *)(v2 + 128);
    IsMonochrome = XEPALOBJ::bIsMonochrome((XEPALOBJ *)&v6);
    DEC_SHARE_REF_CNT(v4);
  }
  return IsMonochrome;
}
