/*
 * XREFs of ?Initialize@Details@Platform@@YAHXZ @ 0x1801E5310
 * Callers:
 *     <none>
 * Callees:
 *     atexit @ 0x1801E277C (atexit.c)
 *     ?InitializeData@Details@Platform@@YAJH@Z_0 @ 0x1801E5669 (-InitializeData@Details@Platform@@YAJH@Z_0.c)
 *     ?UninitializeData@Details@Platform@@YAXH@Z_0 @ 0x1801E566F (-UninitializeData@Details@Platform@@YAXH@Z_0.c)
 */

__int64 __fastcall Platform::Details::Initialize(Platform::Details *this, int a2)
{
  Platform::Details *v2; // rcx
  int v3; // edx
  int v4; // ebx

  v2 = (Platform::Details *)(unsigned int)__abi___threading_model;
  if ( (_DWORD)__abi___threading_model == 3 )
    v2 = 0LL;
  LODWORD(__abi___threading_model) = (_DWORD)v2;
  v4 = Platform::Details::InitializeData(v2, a2);
  if ( v4 >= 0 )
  {
    atexit(Platform::Details::Cleanup);
    return 0LL;
  }
  else
  {
    Platform::Details::UninitializeData((Platform::Details *)(unsigned int)__abi___threading_model, v3);
    return (unsigned int)v4;
  }
}
