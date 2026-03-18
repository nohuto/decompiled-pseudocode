/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C027D004
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C027D090 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C027D0D0 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C027D100 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C027D260 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C027D2A0 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C027D310 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C027D340 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C027D390 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C027D3E0 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C027D430 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C027D4A0 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C027D4D0 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C027D520 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx
  int v1; // ecx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C032587C
      || (MEMORY[0xFFFFF78000000014] <= GreBootTime.QuadPart + 0x117D78400LL
        ? (v1 = dword_1C032587C)
        : (v1 = 1, Seed = MEMORY[0xFFFFF78000000014], dword_1C032587C = 1),
          v1) )
    {
      if ( (RtlRandom(&Seed) & dword_1C0325884) == 0 )
        return 1;
    }
  }
  return v0;
}
