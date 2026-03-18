/*
 * XREFs of ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C013EA94
 * Callers:
 *     GreDereferenceObject @ 0x1C001C23C (GreDereferenceObject.c)
 *     ?vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z @ 0x1C00ADC18 (-vCleanupOwnedRedirectionDeviceBitmaps@@YAXPEAVPDEV@@W4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFREF::bDeleteSurface(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = SURFACE::bDeleteSurface(*a1, a2, a3);
  if ( (_DWORD)result )
    *a1 = 0LL;
  return result;
}
