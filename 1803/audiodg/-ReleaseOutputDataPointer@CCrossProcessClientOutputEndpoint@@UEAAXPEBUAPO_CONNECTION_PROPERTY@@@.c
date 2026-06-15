/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400567D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140018218 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140060254 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessClientOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2,
        unsigned __int8 a3)
{
  unsigned __int64 u32ValidFrameCount; // rbx
  CCrossProcessBaseEndpoint *v4; // r12
  unsigned int v7; // esi
  signed __int64 v8; // r15
  unsigned __int64 v9; // r13
  unsigned __int8 v10; // r8
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // edx
  __int32 v14; // ecx
  unsigned int v15; // ebp
  void *v16; // rcx
  int v17; // edx
  unsigned int v18; // ebp
  void *v19; // rcx
  int v20; // ebx
  int v21; // edx
  size_t v22; // r8
  __int64 v23; // rcx

  u32ValidFrameCount = a2->u32ValidFrameCount;
  v4 = (CCrossProcessClientOutputEndpoint *)((char *)this - 432);
  v7 = 0;
  v8 = *(_QWORD *)(*((_QWORD *)this - 46) + 8LL);
  v9 = (unsigned int)u32ValidFrameCount;
  AEWMILOG_DATA((unsigned int)this, (char *)this - 432, a3, 0x13u, u32ValidFrameCount, v8, 0LL);
  if ( !CCrossProcessBaseEndpoint::IsValidOffset(v4, v8, v10) )
    goto LABEL_17;
  if ( !(_DWORD)u32ValidFrameCount )
    goto LABEL_17;
  v11 = *((_DWORD *)this - 74);
  v12 = *((_QWORD *)this - 45);
  v7 = u32ValidFrameCount * *((_DWORD *)this - 88);
  v13 = *(_DWORD *)(v12 + 140) + v8 % v11;
  if ( v13 > *(_DWORD *)(v12 + 144) )
    goto LABEL_17;
  LOBYTE(v12) = 1;
  if ( (unsigned int)u32ValidFrameCount >= *((_DWORD *)this + 5) || (v14 = 1, (*((_BYTE *)this - 272) & 1) == 0) )
    v14 = 0;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 46) + 168LL), v14);
  v11 = *((_DWORD *)this + 4);
  if ( !v11 )
  {
    if ( a2->u32BufferFlags != BUFFER_SILENT )
      goto LABEL_27;
    v20 = 128;
    v22 = v7;
    if ( *((_DWORD *)this - 84) != 8 )
      v20 = 0;
    v23 = v13;
    goto LABEL_26;
  }
  if ( v11 != 1 )
    goto LABEL_17;
  v15 = *(_DWORD *)(*((_QWORD *)this - 45) + 144LL);
  if ( v13 + v7 > v15 )
  {
    v18 = v15 - v13;
    v19 = (void *)(*((_QWORD *)this - 46) + v13);
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      memcpy_0(v19, *((const void **)this - 41), v18);
      memcpy_0(
        (void *)(*((_QWORD *)this - 46) + *(unsigned int *)(*((_QWORD *)this - 45) + 140LL)),
        (const void *)(v18 + *((_QWORD *)this - 41)),
        v7 - v18);
LABEL_27:
      v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 46) + 8LL), v7);
      goto LABEL_17;
    }
    v20 = 128;
    v21 = 128;
    if ( *((_DWORD *)this - 84) != 8 )
      v21 = 0;
    memset_0(v19, v21, v18);
    v22 = v7 - v18;
    v23 = *(unsigned int *)(*((_QWORD *)this - 45) + 140LL);
    if ( *((_DWORD *)this - 84) != 8 )
      v20 = 0;
LABEL_26:
    memset_0((void *)(*((_QWORD *)this - 46) + v23), v20, v22);
    goto LABEL_27;
  }
  if ( v7 <= v15 )
  {
    v16 = (void *)(*((_QWORD *)this - 46) + v13);
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      memcpy_0(v16, *((const void **)this - 41), v7);
    }
    else
    {
      v17 = 128;
      if ( *((_DWORD *)this - 84) != 8 )
        v17 = 0;
      memset_0(v16, v17, v7);
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 46) + 8LL), v7);
  }
LABEL_17:
  if ( *((_QWORD *)this - 3) )
  {
    ResetEvent(*((HANDLE *)this - 2));
    SetEvent(*((HANDLE *)this - 3));
    WaitForSingleObject(*((HANDLE *)this - 2), 0xFFFFFFFF);
  }
  *((_DWORD *)this + 4) = 3;
  AEWMILOG_DATA(v11, v4, v12, 0x14u, v9, v8, v7);
}
