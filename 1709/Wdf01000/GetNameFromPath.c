/*
 * XREFs of GetNameFromPath @ 0x1C0015670
 * Callers:
 *     GetImageName @ 0x1C00153AC (GetImageName.c)
 *     FxLibraryCommonRegisterClient @ 0x1C0015A64 (FxLibraryCommonRegisterClient.c)
 *     ?IsCompanionRegisteredForDevice@FxCompanionLibrary@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00360C0 (-IsCompanionRegisteredForDevice@FxCompanionLibrary@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJ.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C0073E20 (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 * Callees:
 *     <none>
 */

void __fastcall GetNameFromPath(const _UNICODE_STRING *Path, _UNICODE_STRING *Name)
{
  __int64 Length; // rcx
  wchar_t *v4; // rax
  wchar_t *v5; // rcx
  wchar_t *Buffer; // rax
  wchar_t *v7; // rax
  bool v8; // zf
  unsigned __int16 v9; // ax

  if ( Path->Length < 2u )
  {
    *(_QWORD *)&Name->Length = 0LL;
    Name->Buffer = 0LL;
  }
  else
  {
    Length = Path->Length;
    v4 = Path->Buffer - 1;
    Name->Length = 2;
    v5 = (wchar_t *)((char *)v4 + Length);
    Name->Buffer = v5;
    if ( v5 < Path->Buffer )
    {
LABEL_10:
      Name->Length -= 2;
      ++Name->Buffer;
      v9 = Name->Length;
    }
    else
    {
      while ( 1 )
      {
        Buffer = Name->Buffer;
        if ( *Buffer == 92 )
          break;
        Name->Length += 2;
        v7 = Buffer - 1;
        Name->Buffer = v7;
        if ( v7 < Path->Buffer )
          goto LABEL_10;
      }
      Name->Buffer = Buffer + 1;
      v8 = Name->Length == 2;
      Name->Length -= 2;
      v9 = Name->Length;
      if ( v8 )
        Name->Buffer = 0LL;
    }
    Name->MaximumLength = v9;
  }
}
