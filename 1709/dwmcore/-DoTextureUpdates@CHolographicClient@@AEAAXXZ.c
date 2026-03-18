/*
 * XREFs of ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801C29EC
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJII@Z @ 0x1801C2C90 (-FrameUpdate@CHolographicClient@@UEAAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxx @ 0x1801C2330 (McTemplateU0xxxx.c)
 *     ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x1801C38B4 (-RemoveAt@-$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0f @ 0x1801C3A58 (McTemplateU0f.c)
 *     McTemplateU0xxxq @ 0x1801C3AB8 (McTemplateU0xxxq.c)
 */

void __fastcall CHolographicClient::DoTextureUpdates(CHolographicClient *this)
{
  int v2; // edi
  __int64 v3; // r8
  unsigned int **v4; // rsi
  DWORD v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  DWORD v10; // ebp
  __int64 i; // rdi
  char v12; // [rsp+28h] [rbp-10h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 48);
  v3 = ++qword_180272F60;
  if ( !v2 )
    goto LABEL_16;
  v4 = (unsigned int **)((char *)this + 168);
  do
  {
    v5 = WaitForSingleObject(*((HANDLE *)*v4 + 1), 0);
    v10 = v5;
    if ( !v5 )
    {
      ++qword_180272F58;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 3) + 48LL))(
          *((_QWORD *)this + 3),
          **v4,
          *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 152LL))(
        *((_QWORD *)this + 3),
        *((_QWORD *)*v4 + 2));
LABEL_10:
      DynArray<CHolographicClient::TextureUpdate,0>::RemoveAt(v4);
      goto LABEL_11;
    }
    if ( v5 == -1 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0xxxq(v7, v6, v8, v9, v2, v5 | v12);
      goto LABEL_10;
    }
LABEL_11:
    v2 = *((_DWORD *)this + 48);
  }
  while ( v10 == -1 && v2 );
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0f();
  v3 = qword_180272F60;
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xxxx(v3 - qword_180272F58, &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATECOUNT);
}
