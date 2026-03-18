/*
 * XREFs of ?GetUserModeViewAtOffset@CBatchSharedMemoryPool@DirectComposition@@QEAAJ_KPEAPEAX@Z @ 0x1C001AFD0
 * Callers:
 *     ?GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z @ 0x1C0017EB8 (-GetChannelRDPHeaders@CApplicationChannel@DirectComposition@@QEAAJPEAPEAUUCE_RDP_HEADER@@0@Z.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C004686C (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CBatchSharedMemoryPool::GetUserModeViewAtOffset(
        DirectComposition::CBatchSharedMemoryPool *this,
        __int64 a2,
        void **a3)
{
  __int64 v3; // rax
  int v4; // r9d
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v3 = *((_QWORD *)this + 6);
  v4 = 0;
  if ( v3 )
    goto LABEL_4;
  v12 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  v4 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *, _QWORD, __int64, __int64 *, __int64 *, int, int, int))MmMapViewOfSection)(
         *((_QWORD *)this + 3),
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         &v11,
         0LL,
         4096LL,
         &v10,
         &v12,
         2,
         0x400000,
         2);
  if ( v4 >= 0 )
  {
    v8 = v11;
    *((_QWORD *)this + 6) = v11;
    v3 = v8;
LABEL_4:
    *a3 = (void *)(v3 + a2);
  }
  return (unsigned int)v4;
}
