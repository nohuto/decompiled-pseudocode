/*
 * XREFs of ?IsPointerInfoNodePrimary@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6ABC
 * Callers:
 *     ?IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C6AE8 (-IsPointerInfoNodePrimaryDown@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C803C (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C019972C (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall IsPointerInfoNodePrimary(const struct tagPOINTERINFONODE *a1)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // edx

  v1 = IsPointerInfoNodeValid(a1);
  v3 = 0;
  if ( v1 )
    return (*(_DWORD *)(v2 + 68) & 0x2000) != 0;
  return v3;
}
