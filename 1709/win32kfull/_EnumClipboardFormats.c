/*
 * XREFs of _EnumClipboardFormats @ 0x1C013FB00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     FindClipFormat @ 0x1C00C65BC (FindClipFormat.c)
 *     CheckClipboardAccess @ 0x1C00C6624 (CheckClipboardAccess.c)
 */

__int64 __fastcall EnumClipboardFormats(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned int *v8; // rcx
  __int64 ClipFormat; // rax

  v4 = a1;
  v5 = 0;
  v7 = CheckClipboardAccess(a1, a2, a3, a4);
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 48) == gptiCurrent )
    {
      v8 = *(unsigned int **)(v7 + 96);
      if ( v8 )
      {
        if ( !v4 )
          goto LABEL_7;
        ClipFormat = FindClipFormat(v7, v4, 1);
        if ( ClipFormat )
        {
          v8 = (unsigned int *)(ClipFormat + 32);
LABEL_7:
          if ( v8 )
          {
            if ( (unsigned __int64)v8 < *(_QWORD *)(v7 + 96) + 32 * (unsigned __int64)*(unsigned int *)(v7 + 104) )
              return *v8;
          }
        }
      }
      return v5;
    }
    UserSetLastError(1418LL, v6);
  }
  return 0LL;
}
