/*
 * XREFs of ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801FF00C
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJII@Z @ 0x1801FF2C0 (-FrameUpdate@CHolographicClient@@UEAAJII@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxxx @ 0x1801FE73C (McTemplateU0xxxx.c)
 *     ?RemoveAt@?$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z @ 0x1802002B0 (-RemoveAt@-$DynArray@UTextureUpdate@CHolographicClient@@$0A@@@QEAAJI@Z.c)
 *     McTemplateU0f @ 0x180200374 (McTemplateU0f.c)
 *     McTemplateU0xxxq @ 0x1802003D4 (McTemplateU0xxxq.c)
 */

void __fastcall CHolographicClient::DoTextureUpdates(CHolographicClient *this)
{
  int v2; // edi
  __int64 v3; // r8
  unsigned int **v4; // rsi
  DWORD v5; // eax
  int v6; // ecx
  DWORD v7; // ebp
  __int64 i; // rdi
  char v9; // [rsp+28h] [rbp-10h]
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 56);
  v3 = ++qword_1802DA4C8;
  if ( !v2 )
    goto LABEL_16;
  v4 = (unsigned int **)((char *)this + 200);
  do
  {
    v5 = WaitForSingleObject(*((HANDLE *)*v4 + 1), 0);
    v7 = v5;
    if ( !v5 )
    {
      ++qword_1802DA4C0;
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
        McTemplateU0xxxq(
          v6,
          (unsigned int)&EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATEWAITFAILED,
          qword_1802DA4C8,
          qword_1802DA4C0,
          v2,
          v5 | v9);
      goto LABEL_10;
    }
LABEL_11:
    v2 = *((_DWORD *)this + 56);
  }
  while ( v7 == -1 && v2 );
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0f();
  v3 = qword_1802DA4C8;
LABEL_16:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xxxx(v3 - qword_1802DA4C0, &EVTDESC_HOLOGRAPHICCLIENT_TEXTUREUPDATECOUNT);
}
