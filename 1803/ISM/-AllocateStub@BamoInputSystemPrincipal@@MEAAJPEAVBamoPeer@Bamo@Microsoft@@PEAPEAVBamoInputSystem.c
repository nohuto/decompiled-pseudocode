/*
 * XREFs of ?AllocateStub@BamoInputSystemPrincipal@@MEAAJPEAVBamoPeer@Bamo@Microsoft@@PEAPEAVBamoInputSystemStub@@@Z @ 0x180021CD0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall BamoInputSystemPrincipal::AllocateStub(
        BamoInputSystemPrincipal *this,
        struct Microsoft::Bamo::BamoPeer *a2,
        struct BamoInputSystemStub **a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax

  v4 = operator new(0x50uLL);
  memset_0(v4, 0, 0x50uLL);
  *v4 = &BamoInputSystemStub::`vftable'{for `Microsoft::Bamo::BamoStub'};
  v4[1] = &BamoInputSystemStub::`vftable'{for `IInputSystemStub'};
  *((_DWORD *)v4 + 8) = 0;
  v4[5] = 0LL;
  *((_BYTE *)v4 + 48) = 0;
  *((_DWORD *)v4 + 6) = 1;
  v4[7] = 0LL;
  v4[8] = 0LL;
  v4[9] = 0LL;
  v4[2] = &BamoImpl::BamoDragNDropContextualProcessorStubImpl::`vftable';
  result = 0LL;
  *a3 = (struct BamoInputSystemStub *)v4;
  return result;
}
