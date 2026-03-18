/*
 * XREFs of ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18008D148
 * Callers:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x18008D360 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800BA920 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1801AE954 (--$ReleaseInterfaceNoNULL@VCScratchRenderTargetBitmap@@@@YAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
        CRenderTargetBitmapCache *this,
        struct CScratchRenderTargetBitmap *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // eax
  signed int v8; // edi
  signed int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rsi
  struct CScratchRenderTargetBitmap *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  if ( *((_BYTE *)a2 + 273) )
    --*((_DWORD *)this + 10);
  v3 = (__int64)this + 488;
  if ( !this )
    v3 = 1024LL;
  *((_QWORD *)a2 + 33) = *(_QWORD *)v3;
  LODWORD(v4) = *((_DWORD *)this + 6);
  if ( (unsigned int)v4 >= 0x20 )
  {
    v10 = *(_QWORD *)v3;
    while ( (_DWORD)v4 )
    {
      v4 = (unsigned int)(v4 - 1);
      v11 = *(_QWORD *)(*(_QWORD *)this + 8 * v4);
      if ( (unsigned __int64)(v10 - *(_QWORD *)(v11 + 264)) > 1 )
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt(this, (unsigned int)v4);
        *(_BYTE *)(v11 + 272) = 0;
        ReleaseInterfaceNoNULL<CScratchRenderTargetBitmap>(v11);
      }
    }
  }
  if ( *((int *)this + 88) >= 0 )
  {
    v5 = *((unsigned int *)this + 6);
    v6 = (unsigned int)v12;
    v7 = v5 + 1;
    if ( (int)v5 + 1 >= (unsigned int)v5 )
      v6 = v5 + 1;
    v8 = v7 < (unsigned int)v5 ? 0x80070216 : 0;
    if ( v7 < (unsigned int)v5 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0xB5u);
    }
    else if ( v6 > *((_DWORD *)this + 5) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 8u, 1, &v12);
      v8 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 8 * v5) = v12;
      *((_DWORD *)this + 6) = v6;
    }
    if ( v8 >= 0 )
      CMILCOMBase::InternalAddRef((struct CScratchRenderTargetBitmap *)((char *)v12 + 144));
  }
}
