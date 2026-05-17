/*
 * XREFs of _splitpath @ 0x18008C110
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008C198 @ 0x18008C198 (sub_18008C198.c)
 */

void __cdecl splitpath(const char *FullPath, char *Drive, char *Dir, char *Filename, char *Ext)
{
  sub_18008C198(
    (char *)FullPath,
    Drive,
    -(__int64)(Dir != 0LL) & 0x100,
    Filename,
    -(__int64)(Filename != 0LL) & 0x100,
    Ext,
    -(__int64)(Ext != 0LL) & 0x100);
}
