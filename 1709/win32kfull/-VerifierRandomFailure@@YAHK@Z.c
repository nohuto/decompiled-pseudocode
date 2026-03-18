/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C02799F0
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C0279A70 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C0279AB0 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C0279AE0 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C0279C40 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C0279C80 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C0279CF0 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C0279D20 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C0279D70 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C0279DC0 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C0279E10 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C0279E80 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C0279EB0 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C0279F00 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C032187C )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C032187C = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C032187C )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C0321884) == 0 )
        return 1;
    }
  }
  return v0;
}
