/*
 * XREFs of ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008D50
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00089F0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  char *v5; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) == 0 && *((_QWORD *)this + 15) && *((_QWORD *)this + 17) )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x48uLL, &v10) )
    {
      v5 = (char *)v10;
      *(_DWORD *)v10 = 72;
      v6 = v5 + 4;
      memset(v5 + 4, 0, 0x44uLL);
      *v6 = 238;
      v6[1] = *((_DWORD *)this + 6);
      v6[2] = *((_DWORD *)this + 36);
      v6[3] = *(_DWORD *)(*((_QWORD *)this + 15) + 24LL);
      v6[4] = *((_DWORD *)this + 32);
      v6[5] = *((_DWORD *)this + 34);
      v6[6] = *((_DWORD *)this + 54);
      v6[7] = *((_DWORD *)this + 55);
      v6[8] = *((_DWORD *)this + 57);
      v6[16] = *((_DWORD *)this + 59);
      v6[9] = *((_DWORD *)this + 60);
      v6[10] = *((_DWORD *)this + 62);
      v7 = *((_QWORD *)this + 37);
      if ( v7 )
        LODWORD(v7) = *(_DWORD *)(v7 + 40);
      v6[11] = v7;
      v8 = *((_QWORD *)this + 19);
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 24);
      else
        v9 = 0;
      v6[12] = v9;
      v6[13] = *((_DWORD *)this + 42);
      v6[14] = *((_DWORD *)this + 40);
      v6[15] = *((_DWORD *)this + 44);
      *((_DWORD *)this + 44) = 0;
      *((_DWORD *)this + 4) |= 0x800u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
