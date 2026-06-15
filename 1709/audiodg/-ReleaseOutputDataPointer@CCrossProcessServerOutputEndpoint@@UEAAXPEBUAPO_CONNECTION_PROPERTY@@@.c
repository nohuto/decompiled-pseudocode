/*
 * XREFs of ?ReleaseOutputDataPointer@CCrossProcessServerOutputEndpoint@@UEAAXPEBUAPO_CONNECTION_PROPERTY@@@Z @ 0x1400595B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z @ 0x140017B98 (-IsValidOffset@CCrossProcessBaseEndpoint@@IEAA_N_J@Z.c)
 *     __security_check_cookie @ 0x14001CBB0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ?AEWMILOG_DATA@@YAXKPEAXEE_K11@Z @ 0x140063254 (-AEWMILOG_DATA@@YAXKPEAXEE_K11@Z.c)
 */

void __fastcall CCrossProcessServerOutputEndpoint::ReleaseOutputDataPointer(
        CCrossProcessServerOutputEndpoint *this,
        const struct APO_CONNECTION_PROPERTY *a2,
        unsigned __int8 a3)
{
  CCrossProcessBaseEndpoint *v3; // r12
  unsigned __int8 v6; // r8
  UINT32 u32ValidFrameCount; // ebx
  unsigned int v8; // ecx
  __int64 v9; // r15
  APO_BUFFER_FLAGS u32BufferFlags; // r8d
  __int64 v11; // r9
  __int128 v12; // xmm1
  unsigned int v13; // esi
  unsigned int v14; // r15d
  unsigned int v15; // r13d
  unsigned int v16; // r13d
  unsigned int v17; // r8d
  float v18; // xmm0_4
  __int64 v19; // rcx
  double v20; // xmm1_8
  __int64 v21; // rcx
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-10h]

  v3 = (CCrossProcessServerOutputEndpoint *)((char *)this - 440);
  AEWMILOG_DATA((unsigned int)this, (char *)this - 440, a3, 0xBu, a2->u32ValidFrameCount, 0LL, 0LL);
  u32ValidFrameCount = a2->u32ValidFrameCount;
  v8 = *(_DWORD *)(*((_QWORD *)this - 47) + 156LL);
  if ( u32ValidFrameCount )
  {
    if ( (v8 & 1) != 0 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this - 47) + 8LL);
      if ( CCrossProcessBaseEndpoint::IsValidOffset(v3, v9, v6) )
      {
        u32BufferFlags = a2->u32BufferFlags;
        if ( u32BufferFlags )
        {
          v11 = *((_QWORD *)this - 46);
          v12 = *(_OWORD *)((char *)this + 104);
          v8 = *((_DWORD *)this + 4);
          v13 = u32ValidFrameCount * *((_DWORD *)this - 90);
          v14 = *(_DWORD *)(v11 + 140) + v9 % *((unsigned int *)this - 76);
          v22 = *(_OWORD *)((char *)this + 88);
          v24 = *((_QWORD *)this + 15);
          v23 = v12;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              v15 = *(_DWORD *)(v11 + 144);
              if ( *((_DWORD *)this + 20) )
                v13 = *((_DWORD *)this + 20);
              if ( v14 + v13 > v15 )
              {
                v16 = v15 - v14;
                if ( u32BufferFlags != BUFFER_SILENT )
                {
                  memcpy_0((void *)(*((_QWORD *)this - 47) + v14), *((const void **)this - 42), v16);
                  memcpy_0(
                    (void *)(*((_QWORD *)this - 47) + *(unsigned int *)(*((_QWORD *)this - 46) + 140LL)),
                    (const void *)(v16 + *((_QWORD *)this - 42)),
                    v13 - v16);
                }
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v3 + 88LL))(
                  v3,
                  1LL,
                  v14,
                  v16 / *((_DWORD *)this - 90),
                  &v22,
                  a2->u32BufferFlags,
                  0);
                v17 = *((_DWORD *)this - 90);
                v18 = *((float *)this - 75);
                HIDWORD(v24) = 2;
                v19 = v16 / v17;
                *(_QWORD *)&v23 = v23 - v19;
                v20 = (double)(int)v19;
                v21 = *(_QWORD *)v3;
                *((_QWORD *)&v23 + 1) += (unsigned int)(int)(v20 * 10000000.0 / v18 + 0.5);
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(v21 + 88))(
                  v3,
                  1LL,
                  *(unsigned int *)(*((_QWORD *)this - 46) + 140LL),
                  (v13 - v16) / v17,
                  &v22,
                  a2->u32BufferFlags,
                  0);
                v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 8LL), v13);
              }
              else
              {
                if ( u32BufferFlags != BUFFER_SILENT )
                  memcpy_0((void *)(*((_QWORD *)this - 47) + v14), *((const void **)this - 42), v13);
                _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 8LL), v13);
                (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, _DWORD))(*(_QWORD *)v3 + 88LL))(
                  v3,
                  1LL,
                  v14,
                  v13 / *((_DWORD *)this - 90),
                  &v22,
                  a2->u32BufferFlags,
                  0);
              }
            }
          }
          else
          {
            (*(void (__fastcall **)(CCrossProcessBaseEndpoint *, __int64, _QWORD, _QWORD, __int128 *, APO_BUFFER_FLAGS, int))(*(_QWORD *)v3 + 88LL))(
              v3,
              1LL,
              v14,
              u32ValidFrameCount,
              &v22,
              u32BufferFlags,
              1);
            if ( a2->u32BufferFlags )
              _InterlockedExchangeAdd64((volatile signed __int64 *)(*((_QWORD *)this - 47) + 8LL), v13);
          }
        }
      }
    }
  }
  *((_DWORD *)this + 4) = 3;
  AEWMILOG_DATA(v8, v3, a2->u32ValidFrameCount, 0xCu, a2->u32ValidFrameCount, 0LL, a2->u32BufferFlags);
  SetEvent(*((HANDLE *)this - 39));
}
