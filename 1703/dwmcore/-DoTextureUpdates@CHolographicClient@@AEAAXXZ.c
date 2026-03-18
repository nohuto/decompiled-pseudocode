/*
 * XREFs of ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801A77DC
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJI@Z @ 0x1801A7AB0 (-FrameUpdate@CHolographicClient@@UEAAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xxxx @ 0x180145A64 (Template_xxxx.c)
 *     ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x1801A87DC (-RemoveAt@-$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z.c)
 *     Template_f @ 0x1801A8984 (Template_f.c)
 *     Template_xxxq @ 0x1801A89E8 (Template_xxxq.c)
 */

void __fastcall CHolographicClient::DoTextureUpdates(CHolographicClient *this)
{
  unsigned int v2; // ebx
  int v3; // edx
  int v4; // ecx
  DWORD v5; // esi
  int v6; // r8d
  int v7; // r9d
  unsigned int i; // ebx
  char *v9; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+18h] BYREF

  ++qword_180241C40;
  v2 = *((_DWORD *)this + 50);
  if ( !v2 )
  {
LABEL_16:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      Template_xxxx(v2, &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATECOUNT);
    return;
  }
  do
  {
    v5 = WaitForSingleObject(*(HANDLE *)(*((_QWORD *)this + 22) + 8LL), 0);
    if ( !v5 )
    {
      ++qword_180241C48;
      for ( i = 0; i < *((_DWORD *)this + 16); ++i )
        _guard_dispatch_icall_fptr();
      _guard_dispatch_icall_fptr();
      v9 = (char *)this + 176;
LABEL_11:
      DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(v9);
      goto LABEL_12;
    }
    if ( v5 == -1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        Template_xxxq(v4, v3, v6, v7, v2, -1);
      v9 = (char *)this + 176;
      goto LABEL_11;
    }
LABEL_12:
    v2 = *((_DWORD *)this + 50);
  }
  while ( v5 == -1 && v2 );
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    Template_f();
    goto LABEL_16;
  }
}
