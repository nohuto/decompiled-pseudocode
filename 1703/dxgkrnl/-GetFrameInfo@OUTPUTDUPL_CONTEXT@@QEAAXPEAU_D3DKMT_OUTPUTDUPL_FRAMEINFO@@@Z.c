/*
 * XREFs of ?GetFrameInfo@OUTPUTDUPL_CONTEXT@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_FRAMEINFO@@@Z @ 0x1C01B1FF0
 * Callers:
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1C01ACDC8 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 * Callees:
 *     Template_pqxxqttqq @ 0x1C003B320 (Template_pqxxqttqq.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::GetFrameInfo(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_FRAMEINFO *a2,
        __int64 a3)
{
  LARGE_INTEGER *v3; // rax
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // [rsp+20h] [rbp-48h]
  UINT AccumulatedFrames; // [rsp+38h] [rbp-30h]
  BOOL RectsCoalesced; // [rsp+40h] [rbp-28h]
  BOOL ProtectedContentMaskedOut; // [rsp+48h] [rbp-20h]
  UINT TotalMetadataBufferSize; // [rsp+50h] [rbp-18h]
  UINT PointerShapeBufferSize; // [rsp+58h] [rbp-10h]

  v3 = (LARGE_INTEGER *)*((_QWORD *)this + 33);
  v5 = 0LL;
  if ( v3[2].HighPart )
  {
    a2->LastMouseUpdateTime = *v3;
    a3 = *(unsigned int *)(*((_QWORD *)this + 33) + 28LL);
    a2->PointerPosition.Position.x = a3;
    a2->PointerPosition.Position.y = *(_DWORD *)(*((_QWORD *)this + 33) + 32LL);
    a2->PointerPosition.Visible = *(_DWORD *)(*((_QWORD *)this + 33) + 36LL) & 1;
  }
  else
  {
    a2->LastMouseUpdateTime.QuadPart = 0LL;
    a2->PointerPosition.Position = 0LL;
    a2->PointerPosition.Visible = 0;
  }
  v7 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v7 + 40) )
    v8 = *(unsigned int *)(*(_QWORD *)(v7 + 88) + 8LL);
  else
    v8 = 0LL;
  a2->PointerShapeBufferSize = v8;
  v9 = *((_QWORD *)this + 33);
  if ( *(_DWORD *)(v9 + 16) == 2 )
  {
    a2->LastPresentTime.QuadPart = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 8LL);
    a2->AccumulatedFrames = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 4LL);
    a2->RectsCoalesced = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + 8LL) + 16LL);
    a2->ProtectedContentMaskedOut = **(_DWORD **)(*((_QWORD *)this + 33) + 8LL);
    v5 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
    v8 = (unsigned int)(3 * *(_DWORD *)(v5 + 44));
    a2->TotalMetadataBufferSize = 16 * *(_DWORD *)(v5 + 24) + 24 * *(_DWORD *)(v5 + 44);
  }
  else
  {
    a2->LastPresentTime.QuadPart = 0LL;
    *(_QWORD *)&a2->AccumulatedFrames = 0LL;
    a2->ProtectedContentMaskedOut = 0;
    a2->TotalMetadataBufferSize = 0;
  }
  *((_DWORD *)this + 77) = 1;
  *((_DWORD *)this + 78) = 1;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    PointerShapeBufferSize = a2->PointerShapeBufferSize;
    TotalMetadataBufferSize = a2->TotalMetadataBufferSize;
    ProtectedContentMaskedOut = a2->ProtectedContentMaskedOut;
    RectsCoalesced = a2->RectsCoalesced;
    AccumulatedFrames = a2->AccumulatedFrames;
    v10 = *((_DWORD *)this + 11);
    Template_pqxxqttqq(
      v8,
      v5,
      a3,
      this,
      v10,
      a2->LastPresentTime.QuadPart,
      a2->LastMouseUpdateTime.QuadPart,
      AccumulatedFrames,
      RectsCoalesced,
      ProtectedContentMaskedOut,
      TotalMetadataBufferSize,
      PointerShapeBufferSize);
  }
}
