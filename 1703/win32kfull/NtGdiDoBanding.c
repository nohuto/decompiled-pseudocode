/*
 * XREFs of NtGdiDoBanding @ 0x1C0100280
 * Callers:
 *     <none>
 * Callees:
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0100328 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 */

__int64 __fastcall NtGdiDoBanding(HDC a1, int a2, struct _POINTL *a3, struct tagSIZE *a4)
{
  unsigned int v6; // r10d
  _BYTE *v7; // rdx
  _BYTE *v8; // rdx
  struct _POINTL v10; // [rsp+20h] [rbp-18h] BYREF
  struct tagSIZE v11; // [rsp+28h] [rbp-10h] BYREF

  v10 = 0LL;
  v11 = 0LL;
  v6 = GreDoBanding(a1, a2, &v10, &v11);
  if ( v6 )
  {
    if ( ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = a3;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      v7 = (_BYTE *)W32UserProbeAddress;
    *v7 = *v7;
    v7[7] = v7[7];
    *a3 = v10;
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = a4;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      v8 = (_BYTE *)W32UserProbeAddress;
    *v8 = *v8;
    v8[7] = v8[7];
    *a4 = v11;
  }
  return v6;
}
