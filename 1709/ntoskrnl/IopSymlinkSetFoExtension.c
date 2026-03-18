/*
 * XREFs of IopSymlinkSetFoExtension @ 0x1405E0514
 * Callers:
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14002469C (IopGetFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x140024FC4 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140060ED0 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSymlinkSetFoExtension(__int64 a1, signed __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( *(_QWORD *)(a1 + 208) )
  {
    IopGetFileObjectExtension(a1, 5, &v4);
  }
  else
  {
    result = IopAllocateFileObjectExtension(a1, &v4);
    if ( (int)result < 0 )
      return result;
  }
  return IopSetTypeSpecificFoExtension(v4, 5u, a2);
}
