/*
 * XREFs of NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C028F2A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B8E18 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C00B9A64 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0139BB0 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C026FCB0 (FONTOBJ_cGetAllGlyphHandles.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetAllGlyphHandles(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  ULONG v6; // ebp
  HGLYPH *v7; // rdi
  ULONG v8; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  FONTOBJ *v12; // rax
  FONTOBJ *v13; // r14
  ULONG AllGlyphHandles; // eax
  __int64 v15; // rdx

  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return v8;
  ++*((_DWORD *)ThreadCurrentObj + 108);
  v12 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
  v13 = v12;
  if ( v12 )
  {
    if ( a2 )
    {
      AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v12, 0LL);
      v6 = AllGlyphHandles;
      if ( AllGlyphHandles )
      {
        if ( AllGlyphHandles > 0x9C4000 )
          goto LABEL_13;
        v7 = (HGLYPH *)PALLOCMEM2(4 * AllGlyphHandles, 1886221639LL, 0);
      }
    }
    v8 = FONTOBJ_cGetAllGlyphHandles(v13, v7);
    if ( !v8 || !a2 )
    {
LABEL_11:
      if ( v7 )
        Win32FreePool(v7, v15);
      goto LABEL_13;
    }
    if ( v7 )
    {
      v8 &= -((unsigned int)bSafeCopyBits(a2, v7, 4 * v6) != 0);
      goto LABEL_11;
    }
  }
LABEL_13:
  if ( v11 )
    --*((_DWORD *)v11 + 108);
  return v8;
}
