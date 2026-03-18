/*
 * XREFs of ?ObjectInit@FlipManagerObject@@KAJPEAUDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C004FC20
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?Initialize@CFlipManager@@IEAAJXZ @ 0x1C0050598 (-Initialize@CFlipManager@@IEAAJXZ.c)
 */

__int64 __fastcall FlipManagerObject::ObjectInit(
        struct DxgkCompositionObject *a1,
        void *a2,
        struct IDxgkCompositionObject **a3)
{
  char *v3; // rbx

  v3 = (char *)a1 + 24;
  if ( a1 != (struct DxgkCompositionObject *)-24LL )
  {
    memset((char *)a1 + 24, 0, 0xD8uLL);
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *(_QWORD *)v3 = &CFlipManager::`vftable'{for `IDxgkCompositionObject'};
    *((_QWORD *)v3 + 1) = &CFlipManager::`vftable'{for `CPushLock'};
    *((_QWORD *)v3 + 8) = v3 + 56;
    *((_QWORD *)v3 + 7) = v3 + 56;
    *((_QWORD *)v3 + 10) = v3 + 72;
    *((_QWORD *)v3 + 9) = v3 + 72;
    *((_QWORD *)v3 + 12) = v3 + 88;
    *((_QWORD *)v3 + 11) = v3 + 88;
    *((_QWORD *)v3 + 14) = v3 + 104;
    *((_QWORD *)v3 + 13) = v3 + 104;
    *((_QWORD *)v3 + 16) = v3 + 120;
    *((_QWORD *)v3 + 15) = v3 + 120;
    *((_QWORD *)v3 + 18) = v3 + 136;
    *((_QWORD *)v3 + 17) = v3 + 136;
    *((_QWORD *)v3 + 20) = v3 + 152;
    *((_QWORD *)v3 + 19) = v3 + 152;
  }
  *a3 = (struct IDxgkCompositionObject *)v3;
  return CFlipManager::Initialize((CFlipManager *)v3);
}
