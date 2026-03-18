/*
 * XREFs of ViXdvBindXdvDDIWrappers @ 0x1408160E4
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1408162A4 (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x1402A9838 (VfUtilDbgPrint.c)
 *     ViXdvSearchAllThunkArrays @ 0x1408164F4 (ViXdvSearchAllThunkArrays.c)
 */

char __fastcall ViXdvBindXdvDDIWrappers(__int64 (__fastcall *a1)(_QWORD))
{
  char result; // al
  char v2; // bl
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  unsigned int i; // r11d

  result = (char)a1;
  v2 = 0;
  ViXdvThunksNoXdvEntry = 0;
  ViXdvThunksBoundToXdv = 0;
  ViXdvThunksNotFound = 0;
  ViXdvThunksNotPristine = 0;
  ViXdvThunksShared = 0;
  if ( a1 )
  {
    v3 = (_DWORD *)a1((unsigned int)MmVerifyDriverLevel);
    v4 = v3;
    if ( v3 )
    {
      if ( *v3 == 4 )
      {
        for ( i = 0; i < v4[1]; ++i )
        {
          if ( *(_QWORD *)&v4[2 * i + 2] )
          {
            if ( !(unsigned __int8)ViXdvSearchAllThunkArrays(i) )
              ++ViXdvThunksNotFound;
          }
          else
          {
            ++ViXdvThunksNoXdvEntry;
          }
        }
        return 1;
      }
      else
      {
        VfUtilDbgPrint("XDV DDI version mismatch: kernel version %d   driver version %d\n", 4, *v3);
      }
    }
    return v2;
  }
  return result;
}
