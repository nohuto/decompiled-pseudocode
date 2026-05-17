/*
 * XREFs of _splitpath @ 0x180096EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180096F28 @ 0x180096F28 (sub_180096F28.c)
 */

void __cdecl splitpath(const char *FullPath, char *Drive, char *Dir, char *Filename, char *Ext)
{
  sub_180096F28(
    (char *)FullPath,
    Drive,
    -(__int64)(Dir != 0LL) & 0x100,
    Filename,
    -(__int64)(Filename != 0LL) & 0x100,
    Ext,
    -(__int64)(Ext != 0LL) & 0x100);
}
