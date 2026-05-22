/*
 * XREFs of ?NullValue_ToString@Input@@YA_NPEBXPEAGK@Z @ 0x180034CD8
 * Callers:
 *     ?Boolean_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034D10 (-Boolean_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Byte_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034D80 (-Byte_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?WideString_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034DE0 (-WideString_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Double_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034E30 (-Double_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Guid_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034EA0 (-Guid_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int16_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034F00 (-Int16_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int32_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034F60 (-Int32_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Int64_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180034FC0 (-Int64_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Single_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180035020 (-Single_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt16_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180035090 (-UInt16_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt32_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x1800350F0 (-UInt32_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?UInt64_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x180035150 (-UInt64_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 *     ?Void_ToString@Input@@YAJPEBXKPEAGK@Z @ 0x1800351B0 (-Void_ToString@Input@@YAJPEBXKPEAGK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001C78 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

char __fastcall Input::NullValue_ToString(Input *this, char *a2, unsigned __int16 *a3)
{
  if ( this )
    return 0;
  StringCchCopyW(a2, (unsigned int)a3, (char *)L"(null)");
  return 1;
}
