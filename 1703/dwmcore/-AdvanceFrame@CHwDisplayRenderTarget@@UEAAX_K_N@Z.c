/*
 * XREFs of ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18003A360
 * Callers:
 *     ?AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z @ 0x18006CDF0 (-AdvanceFrame@CHwndRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180039EAC (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18004D0C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180077818 (-TranslateDXGIorD3DErrorInContext@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x18007D1E0 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800C1068 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800CC1EC (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwDisplayRenderTarget::AdvanceFrame(CHwDisplayRenderTarget *this, __int64 a2, char a3)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // rdi
  unsigned int v12; // esi
  union _SLIST_HEADER *v13; // rsi
  __int64 *v14; // rcx
  _QWORD *v15; // rdi
  PSLIST_ENTRY v16; // rbx
  __int64 v17; // rax
  struct CD3DResource *v18; // rdi
  void *(__fastcall *v19)(CD3DVidMemOnlyTexture *__hidden, unsigned int); // rax
  __int64 *v20; // rdx
  __int64 **v21; // r8
  __int64 *v22; // rdx
  int v23; // eax
  CD3DResourceSourceReference *v24; // rcx
  CD3DResourceSourceReference **v25; // r8
  CD3DResourceSourceReference **v26; // rdx
  _QWORD v27[4]; // [rsp+30h] [rbp-48h] BYREF

  v6 = 0LL;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain((CHwDisplayRenderTarget *)((char *)this - 176)) >= 0 )
  {
    v7 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v7 + 1104) != a2 )
    {
      *(_QWORD *)(v7 + 1104) = a2;
      *(_BYTE *)(v7 + 1122) = 0;
      CRenderTargetBitmapCache::AgeRenderTargetBitmaps((CRenderTargetBitmapCache *)(v7 + 552));
      v8 = *(_QWORD *)(v7 + 600);
      v27[1] = *(_QWORD *)(v7 + 616);
      v27[0] = 0LL;
      v27[2] = a2;
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v8 + 32LL))(v8, v27, 1LL);
      v10 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xD88u);
      CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(v7, v10, 0LL);
      if ( a3 )
      {
        v11 = *(unsigned int *)(v7 + 1096);
        v12 = 0;
        if ( (_DWORD)v11 )
        {
          v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v7 + 600) + 56LL))(
                  *(_QWORD *)(v7 + 600),
                  *(_QWORD *)(v7 + 1072),
                  (unsigned int)v11);
          v12 = v23;
          if ( v23 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xF20u);
          do
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + *(_QWORD *)(v7 + 1072)) + 16LL))(*(_QWORD *)(v6 + *(_QWORD *)(v7 + 1072)));
            v6 += 8LL;
            --v11;
          }
          while ( v11 );
          *(_DWORD *)(v7 + 1096) = 0;
          DynArrayImpl<0>::ShrinkToSize(v7 + 1072, 8LL);
        }
        CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(v7, v12, 0LL);
      }
      v13 = (union _SLIST_HEADER *)(v7 + 928);
      v14 = (__int64 *)(v7 + 992);
      if ( (__int64 *)*v14 != v14 )
      {
        v20 = (__int64 *)(v7 + 976);
        v21 = *(__int64 ***)(v7 + 984);
        if ( *(_QWORD *)(*(_QWORD *)(v7 + 976) + 8LL) != v7 + 976 || *v21 != v20 )
          __fastfail(3u);
        if ( *(__int64 **)(*v14 + 8) != v14 || **(__int64 ***)(v7 + 1000) != v14 )
          __fastfail(3u);
        *v21 = v14;
        *(_QWORD *)(v7 + 984) = *(_QWORD *)(v7 + 1000);
        **(_QWORD **)(v7 + 1000) = v20;
        *(_QWORD *)(v7 + 1000) = v21;
        v22 = (__int64 *)*v14;
        if ( *(__int64 **)(*v14 + 8) != v14 || *v21 != v14 )
          __fastfail(3u);
        *v21 = v22;
        v22[1] = (__int64)v21;
        *(_QWORD *)(v7 + 1000) = v7 + 992;
        *v14 = (__int64)v14;
      }
      v15 = *(_QWORD **)(v7 + 1032);
      while ( v15 != (_QWORD *)(v7 + 1032) )
      {
        v24 = (CD3DResourceSourceReference *)(v15 - 2);
        v15 = (_QWORD *)*v15;
        if ( (int)--*((_DWORD *)v24 + 2) <= 0 )
        {
          v25 = (CD3DResourceSourceReference **)*((_QWORD *)v24 + 2);
          v26 = (CD3DResourceSourceReference **)*((_QWORD *)v24 + 3);
          if ( v25[1] != (CD3DResourceSourceReference *)((char *)v24 + 16)
            || *v26 != (CD3DResourceSourceReference *)((char *)v24 + 16) )
          {
            __fastfail(3u);
          }
          *v26 = (CD3DResourceSourceReference *)v25;
          v25[1] = (CD3DResourceSourceReference *)v26;
          CD3DResourceSourceReference::`scalar deleting destructor'(v24, (unsigned int)v26);
        }
      }
      if ( *(_QWORD *)(v7 + 640) )
      {
        while ( 1 )
        {
          v16 = InterlockedFlushSList(v13 + 1);
          if ( !v16 )
            break;
          do
          {
            v18 = (struct CD3DResource *)&v16[-3];
            v16 = v16->Next;
            CD3DResourceManager::DestroyResource((CD3DResourceManager *)v13, v18);
            if ( v18 )
            {
              v19 = *(void *(__fastcall **)(CD3DVidMemOnlyTexture *__hidden, unsigned int))(*(_QWORD *)v18 + 16LL);
              if ( v19 == CD3DVidMemOnlyTexture::`vector deleting destructor' )
                CD3DVidMemOnlyTexture::`vector deleting destructor'(v18, 1u);
              else
                v19(v18, 1u);
            }
          }
          while ( v16 );
        }
      }
    }
    v17 = *((_QWORD *)this + 3);
    if ( *(_BYTE *)(v17 + 294) )
    {
      if ( *(_BYTE *)(v17 + 295) )
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 240LL))(*((_QWORD *)this + 5), a2);
    }
  }
}
