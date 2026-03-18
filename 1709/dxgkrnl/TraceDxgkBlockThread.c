/*
 * XREFs of TraceDxgkBlockThread @ 0x1C000F070
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 */

__int64 __fastcall TraceDxgkBlockThread(__int64 a1)
{
  __int64 result; // rax

  if ( (_DWORD)a1 != -1 )
  {
    result = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      return McTemplateK0q(a1, &EventBlockThread);
  }
  return result;
}
