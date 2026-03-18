/*
 * XREFs of ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800B9D04
 * Callers:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800B9DF0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x18001A40C (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1801E4C38 (--$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
        CRenderTargetBitmapCache *this,
        struct CScratchRenderTargetBitmap *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // edi
  int v9; // eax
  __int64 v10; // r14
  __int64 v11; // rbp
  struct CScratchRenderTargetBitmap *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  if ( *((_BYTE *)a2 + 297) )
    --*((_DWORD *)this + 10);
  v3 = (__int64)this - 536;
  if ( !this )
    v3 = -536LL;
  v4 = (__int64)this + 488;
  if ( !this )
    v4 = 1024LL;
  *((_QWORD *)a2 + 36) = *(_QWORD *)v4;
  LODWORD(v5) = *((_DWORD *)this + 6);
  if ( (unsigned int)v5 >= 0x20 )
  {
    v10 = *(_QWORD *)(v3 + 1024);
    while ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      v11 = *(_QWORD *)(*(_QWORD *)this + 8 * v5);
      if ( (unsigned __int64)(v10 - *(_QWORD *)(v11 + 288)) > 1 )
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v5);
        *(_BYTE *)(v11 + 296) = 0;
        ReleaseInterfaceNoNULL<CScratchRenderTargetBitmap>(v11);
      }
    }
  }
  if ( *(int *)(v3 + 888) >= 0 )
  {
    v6 = *((_DWORD *)this + 6);
    v7 = v6 + 1;
    v8 = v6 + 1 < v6 ? 0x80070216 : 0;
    if ( v6 + 1 < v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xB5u);
    }
    else if ( v7 > *((_DWORD *)this + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8u, 1, &v12);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL * v6) = v12;
      *((_DWORD *)this + 6) = v7;
    }
    if ( v8 >= 0 )
      CMILCOMBase::InternalAddRef((struct CScratchRenderTargetBitmap *)((char *)v12 + 160));
  }
}
