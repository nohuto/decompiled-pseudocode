/*
 * XREFs of NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C0292B90
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0096D7C (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C0097678 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0134C50 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C02735B0 (FONTOBJ_cGetAllGlyphHandles.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetAllGlyphHandles(__int64 a1, char *a2)
{
  ULONG v4; // ebp
  HGLYPH *v5; // rdi
  ULONG v6; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // rbx
  FONTOBJ *v10; // rax
  FONTOBJ *v11; // r15
  ULONG AllGlyphHandles; // eax

  v4 = 0;
  v5 = 0LL;
  v6 = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 108);
    v10 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v11 = v10;
    if ( v10 )
    {
      if ( a2 )
      {
        AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v10, 0LL);
        v4 = AllGlyphHandles;
        if ( AllGlyphHandles )
        {
          if ( AllGlyphHandles > 0x9C4000 )
            goto LABEL_13;
          v5 = (HGLYPH *)PALLOCMEM2(4 * AllGlyphHandles, 1886221639LL, 0);
        }
      }
      v6 = FONTOBJ_cGetAllGlyphHandles(v11, v5);
      if ( v6 && a2 )
      {
        if ( !v5 )
          goto LABEL_13;
        v6 &= -((unsigned int)bSafeCopyBits(a2, v5, 4 * v4) != 0);
      }
      if ( v5 )
        Win32FreePool(v5);
    }
  }
LABEL_13:
  if ( v9 )
    --*((_DWORD *)v9 + 108);
  return v6;
}
