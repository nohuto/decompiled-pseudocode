/*
 * XREFs of IovBuildAsynchronousFsdRequest @ 0x1407A48F0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     XdvIopBuildAsynchronousFsdRequest @ 0x1402778E0 (XdvIopBuildAsynchronousFsdRequest.c)
 *     VfSetIoBuildRequest @ 0x1407B0B5C (VfSetIoBuildRequest.c)
 */

__int64 __fastcall IovBuildAsynchronousFsdRequest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v6 = XdvIopBuildAsynchronousFsdRequest(
         a1,
         a2,
         a3,
         a4,
         a5,
         a6,
         retaddr,
         (__int64 (__fastcall *)(__int64, __int64, __int64))IopBuildAsynchronousFsdRequest);
  v7 = v6;
  if ( v6 )
    VfSetIoBuildRequest(v6);
  return v7;
}
