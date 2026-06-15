/*
 * XREFs of ??1CFadeWindowLUT@@QEAA@XZ @ 0x140056DE4
 * Callers:
 *     ??$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z @ 0x140056AF8 (--$ApplyVolumeRampDown_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z.c)
 *     _ApplyVolumeRampDown_Internal_float_(__cdecl_)(unsigned_char_____ptr64)_void_(__cdecl_)(unsigned_char_____ptr64_float)__::_1_::dtor$0 @ 0x140056C66 (_ApplyVolumeRampDown_Internal_float_(__cdecl_)(unsigned_char_____ptr64)_void_(__cdecl_)(unsigned.c)
 *     ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z @ 0x140056C74 (--$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAEIIIP6AM0@ZP6AX0M@Z@Z.c)
 *     _ApplyVolumeRampUp_Internal_float_(__cdecl_)(unsigned_char_____ptr64)_void_(__cdecl_)(unsigned_char_____ptr64_float)__::_1_::dtor$0 @ 0x140056DD8 (_ApplyVolumeRampUp_Internal_float_(__cdecl_)(unsigned_char_____ptr64)_void_(__cdecl_)(unsigned_c.c)
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140019388 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

void __fastcall CFadeWindowLUT::~CFadeWindowLUT(void **this)
{
  void *v2; // rax
  void *v3; // rax
  void *v4; // rax
  void *v5; // rax
  void *v6; // rax
  void *v7; // rax

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(*this, v2);
  *this = 0LL;
  v3 = (void *)AERTGetDLLRTHeap();
  AERTFree(this[1], v3);
  this[1] = 0LL;
  v4 = (void *)AERTGetDLLRTHeap();
  AERTFree(this[2], v4);
  this[2] = 0LL;
  v5 = (void *)AERTGetDLLRTHeap();
  AERTFree(this[3], v5);
  this[3] = 0LL;
  v6 = (void *)AERTGetDLLRTHeap();
  AERTFree(this[5], v6);
  this[5] = 0LL;
  v7 = (void *)AERTGetDLLRTHeap();
  AERTFree(this[6], v7);
  this[6] = 0LL;
}
