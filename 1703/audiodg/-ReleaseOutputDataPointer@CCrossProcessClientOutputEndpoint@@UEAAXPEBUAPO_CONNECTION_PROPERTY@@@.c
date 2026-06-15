/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessClientOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x140056510
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x14001BA38 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x1400600F0 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
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
  __int64 v11; // rcx
  __int64 v12; // r8
  __int32 v13; // edx
  int v14; // edx
  unsigned int v15; // ebp
  int v16; // edx
  unsigned int v17; // ebp
  int v18; // ebx
  int v19; // edx
  size_t v20; // r8
  int v21; // edx

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
  v12 = *((_QWORD *)this - 45);
  v7 = u32ValidFrameCount * *((_DWORD *)this - 88);
  v11 = *(_DWORD *)(v12 + 140) + (unsigned int)(v8 % *((unsigned int *)this - 74));
  if ( (unsigned int)v11 > *(_DWORD *)(v12 + 144) )
    goto LABEL_17;
  LOBYTE(v12) = 1;
  if ( (unsigned int)u32ValidFrameCount >= *((_DWORD *)this + 5) || (v13 = 1, (*((_BYTE *)this - 272) & 1) == 0) )
    v13 = 0;
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this - 46) + 168LL), v13);
  v14 = *((_DWORD *)this + 4);
  if ( !v14 )
  {
    if ( a2->u32BufferFlags != BUFFER_SILENT )
      goto LABEL_28;
    v21 = 128;
    v20 = v7;
    if ( *((_DWORD *)this - 85) != 8 )
      v21 = 0;
    goto LABEL_27;
  }
  if ( v14 != 1 )
    goto LABEL_17;
  v15 = *(_DWORD *)(*((_QWORD *)this - 45) + 144LL);
  if ( (unsigned int)v11 + v7 > v15 )
  {
    v17 = v15 - v11;
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      memcpy_0((void *)(*((_QWORD *)this - 46) + v11), *((const void **)this - 41), v17);
      memcpy_0(
        (void *)(*((_QWORD *)this - 46) + *(unsigned int *)(*((_QWORD *)this - 45) + 140LL)),
        (const void *)(v17 + *((_QWORD *)this - 41)),
        v7 - v17);
LABEL_28:
      LODWORD(v11) = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 46) + 8LL), v7);
      goto LABEL_17;
    }
    v18 = 128;
    v19 = 128;
    if ( *((_DWORD *)this - 85) != 8 )
      v19 = 0;
    memset((void *)(*((_QWORD *)this - 46) + v11), v19, v17);
    v20 = v7 - v17;
    v11 = *(unsigned int *)(*((_QWORD *)this - 45) + 140LL);
    if ( *((_DWORD *)this - 85) != 8 )
      v18 = 0;
    v21 = v18;
LABEL_27:
    memset((void *)(*((_QWORD *)this - 46) + v11), v21, v20);
    goto LABEL_28;
  }
  if ( v7 <= v15 )
  {
    if ( a2->u32BufferFlags == BUFFER_VALID )
    {
      memcpy_0((void *)(*((_QWORD *)this - 46) + v11), *((const void **)this - 41), v7);
    }
    else
    {
      v16 = 128;
      if ( *((_DWORD *)this - 85) != 8 )
        v16 = 0;
      memset((void *)(*((_QWORD *)this - 46) + v11), v16, v7);
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
