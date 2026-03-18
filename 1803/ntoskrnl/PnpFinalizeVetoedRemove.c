/*
 * XREFs of PnpFinalizeVetoedRemove @ 0x14073254C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventBuildPdoList @ 0x1405C9370 (PiEventBuildPdoList.c)
 *     PiProcessQueryAndCancelRemoval @ 0x14073EC0C (PiProcessQueryAndCancelRemoval.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 */

__int64 __fastcall PnpFinalizeVetoedRemove(__int64 a1, int a2, UNICODE_STRING *a3)
{
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  UNICODE_STRING *v8; // rcx
  __int64 result; // rax
  wchar_t *Buffer; // rcx
  wchar_t *v11; // rdx
  wchar_t v12; // r8

  v3 = *(_DWORD **)(a1 + 48);
  v4 = 0;
  if ( v3 )
    *v3 = a2;
  v8 = *(UNICODE_STRING **)(a1 + 56);
  if ( v8 && a3 )
    RtlCopyUnicodeString(v8, a3);
  result = *(unsigned int *)(a1 + 144);
  if ( (result & 8) != 0 && a2 == 6 )
  {
    Buffer = a3->Buffer;
    v11 = (wchar_t *)((char *)Buffer + a3->Length);
    if ( Buffer < v11 )
    {
      while ( 1 )
      {
        v12 = *Buffer;
        if ( *Buffer == 92 && v4 == 2 )
          break;
        ++Buffer;
        result = v4 + 1;
        if ( v12 != 92 )
          result = v4;
        v4 = result;
        if ( Buffer >= v11 )
        {
          if ( (_DWORD)result != 3 )
            return result;
          break;
        }
      }
      a3->Length = (_WORD)Buffer - LOWORD(a3->Buffer);
    }
  }
  return result;
}
