/*
 * XREFs of IopTrackLink @ 0x14057DFD0
 * Callers:
 *     NtSetInformationFile @ 0x1400ECB00 (NtSetInformationFile.c)
 *     IopTrackLink @ 0x14057DFD0 (IopTrackLink.c)
 * Callees:
 *     IoGetTransactionParameterBlock @ 0x1400A3750 (IoGetTransactionParameterBlock.c)
 *     RtlULongSub @ 0x1400CE2DC (RtlULongSub.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x1400D05A8 (IopVerifierExAllocatePoolWithQuota_1.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1401B32E0 (RtlCompareMemoryUlong.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopTrackLink @ 0x14057DFD0 (IopTrackLink.c)
 *     IopGetSetObjectId @ 0x14057E900 (IopGetSetObjectId.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopGetVolumeId @ 0x140719D20 (IopGetVolumeId.c)
 *     IopMarshalIds @ 0x14071A368 (IopMarshalIds.c)
 *     IopSendMessageToTrackService @ 0x14071A854 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x14071B3F8 (IopSetRemoteLink.c)
 */

NTSTATUS __fastcall IopTrackLink(struct _FILE_OBJECT *a1, __int64 a2, void *a3, ULONG a4, struct _KEVENT *a5, char a6)
{
  struct _FILE_OBJECT *v6; // rbx
  struct _FILE_OBJECT *v7; // rsi
  char v8; // r11
  ULONG v9; // ebx
  unsigned int *PoolWithQuota_1; // rdi
  void *v11; // r10
  KPROCESSOR_MODE v12; // r11
  __int64 v13; // rax
  NTSTATUS result; // eax
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rax
  int v18; // eax
  char v19; // cl
  __int64 v20; // rax
  int v21; // eax
  int VolumeId; // eax
  int v23; // eax
  int SetObjectId; // eax
  int v25; // eax
  char v26; // [rsp+34h] [rbp-2B4h]
  ULONG ulMinuend; // [rsp+40h] [rbp-2A8h] BYREF
  PRKEVENT Event; // [rsp+48h] [rbp-2A0h]
  PVOID P; // [rsp+50h] [rbp-298h]
  __int64 v31; // [rsp+58h] [rbp-290h]
  void *Src; // [rsp+60h] [rbp-288h] BYREF
  void *v33; // [rsp+68h] [rbp-280h]
  struct _KEVENT *v34; // [rsp+70h] [rbp-278h]
  __int128 v35; // [rsp+80h] [rbp-268h] BYREF
  __m128i v36; // [rsp+90h] [rbp-258h]
  __int128 v37; // [rsp+A0h] [rbp-248h]
  __int128 v38; // [rsp+B0h] [rbp-238h]
  __int128 v39; // [rsp+C0h] [rbp-228h]
  __m128i v40; // [rsp+D0h] [rbp-218h]
  __int128 Source; // [rsp+E0h] [rbp-208h] BYREF
  __int128 v42; // [rsp+F0h] [rbp-1F8h]
  _BYTE v43[4]; // [rsp+100h] [rbp-1E8h] BYREF
  __int64 v44; // [rsp+104h] [rbp-1E4h]
  __int64 v45; // [rsp+10Ch] [rbp-1DCh]
  _BYTE v46[4]; // [rsp+118h] [rbp-1D0h] BYREF
  __int64 v47; // [rsp+11Ch] [rbp-1CCh]
  __int64 v48; // [rsp+124h] [rbp-1C4h]
  __int128 v49; // [rsp+130h] [rbp-1B8h]
  __m128i v50; // [rsp+140h] [rbp-1A8h]
  __int128 v51; // [rsp+150h] [rbp-198h]
  __int128 v52; // [rsp+160h] [rbp-188h]
  _OWORD v53[4]; // [rsp+170h] [rbp-178h] BYREF
  _BYTE v54[8]; // [rsp+1B0h] [rbp-138h] BYREF
  int v55; // [rsp+1B8h] [rbp-130h]

  ulMinuend = a4;
  Src = a3;
  v31 = a2;
  v6 = a1;
  Event = a5;
  v34 = a5;
  P = 0LL;
  v7 = 0LL;
  v33 = 0LL;
  v8 = a6;
  if ( a6 )
  {
    v9 = a4;
    PoolWithQuota_1 = (unsigned int *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, a4);
    P = PoolWithQuota_1;
    memmove(PoolWithQuota_1, Src, v9);
    v6 = a1;
    v8 = a6;
    a4 = ulMinuend;
  }
  else
  {
    PoolWithQuota_1 = (unsigned int *)a3;
    P = a3;
  }
  if ( !*(_QWORD *)PoolWithQuota_1 && v8 == 1 )
  {
LABEL_87:
    ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741811;
  }
  if ( RtlULongSub(a4, 0xCu, &ulMinuend) < 0 )
  {
    if ( v12 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741675;
  }
  else
  {
    v13 = PoolWithQuota_1[2];
    if ( ulMinuend < (unsigned int)v13 )
    {
      if ( !v12 )
        return -1073741811;
      goto LABEL_87;
    }
    if ( (unsigned __int64)(v13 + 36) > 0x100 )
    {
      if ( v12 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return -2147483643;
    }
    else
    {
      if ( !v11
        || (result = ObReferenceObjectByHandle(v11, 2u, (POBJECT_TYPE)IoFileObjectType, v12, &Src, 0LL),
            ulMinuend = result,
            v7 = (struct _FILE_OBJECT *)Src,
            v33 = Src,
            result >= 0) )
      {
        if ( (v6->DeviceObject->Characteristics & 0x10) != 0 )
        {
          SetObjectId = IopGetSetObjectId(v6);
          v16 = SetObjectId;
          if ( SetObjectId == -1073741772 )
            goto LABEL_38;
          if ( SetObjectId < 0 )
            goto LABEL_79;
          if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
            goto LABEL_38;
          if ( IoGetTransactionParameterBlock(a1) )
            goto LABEL_78;
          if ( *(_QWORD *)PoolWithQuota_1 )
          {
            if ( IoGetTransactionParameterBlock(v7) )
              goto LABEL_78;
            if ( *(_QWORD *)PoolWithQuota_1 )
            {
              if ( (v7->DeviceObject->Characteristics & 0x10) != 0 )
              {
                v16 = IopGetSetObjectId(v7);
                if ( v16 < 0 )
                  goto LABEL_79;
                v16 = IopGetSetObjectId(v7);
                if ( v16 < 0 )
                  goto LABEL_79;
                IopMarshalIds(v54, v43, v53, PoolWithQuota_1);
                v25 = IopTrackLink((_DWORD)a1, v31, (unsigned int)v54, v55 + 12, (__int64)Event, 0);
                goto LABEL_67;
              }
              VolumeId = IopGetVolumeId(v7);
LABEL_63:
              v16 = VolumeId;
              if ( VolumeId < 0 )
                goto LABEL_79;
              v16 = IopGetSetObjectId(v7);
              if ( v16 < 0 )
                goto LABEL_79;
              IopMarshalIds(v54, v43, v53, PoolWithQuota_1);
              v16 = IopTrackLink((_DWORD)a1, v31, (unsigned int)v54, v55 + 12, (__int64)Event, 0);
              if ( v16 < 0 )
                goto LABEL_79;
              v25 = IopGetSetObjectId(a1);
LABEL_67:
              v16 = v25;
              if ( v25 < 0 )
                goto LABEL_79;
              v49 = v39;
              v50 = v40;
              v51 = Source;
              v52 = v42;
              v50.m128i_i8[0] = _mm_cvtsi128_si32(v40) | 1;
              v16 = IopGetSetObjectId(v7);
              if ( v16 >= 0 )
                goto LABEL_79;
              goto LABEL_69;
            }
          }
          if ( IoGetTransactionParameterBlock(a1) || *(_QWORD *)PoolWithQuota_1 && IoGetTransactionParameterBlock(v7) )
            goto LABEL_78;
          v23 = IopSetRemoteLink(a1);
        }
        else
        {
          if ( *(_QWORD *)PoolWithQuota_1 )
          {
            if ( (v7->DeviceObject->Characteristics & 0x10) == 0 )
            {
              v26 = 0;
              v15 = IopGetSetObjectId(v6);
              v16 = v15;
              if ( v15 != -1073741772 )
              {
                if ( v15 < 0 )
                {
LABEL_79:
                  if ( a6 )
                    ExFreePoolWithTag(PoolWithQuota_1, 0);
                  if ( v7 )
                    ObfDereferenceObject(v7);
                  KeSetEvent(Event, 0, 0);
                  return v16;
                }
                if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
                {
                  if ( !IoGetTransactionParameterBlock(a1)
                    && (!*(_QWORD *)PoolWithQuota_1 || !IoGetTransactionParameterBlock(v7)) )
                  {
                    v16 = IopGetVolumeId(v7);
                    if ( v16 < 0 )
                      goto LABEL_79;
                    v16 = IopGetVolumeId(a1);
                    if ( v16 < 0 )
                      goto LABEL_79;
                    v16 = IopGetSetObjectId(a1);
                    if ( v16 < 0 )
                      goto LABEL_79;
                    v53[0] = v39;
                    v53[1] = v40;
                    v53[2] = Source;
                    v53[3] = v42;
                    v49 = v39;
                    v50 = v40;
                    v51 = Source;
                    v52 = v42;
                    v17 = v44 - v47;
                    if ( v44 == v47 )
                      v17 = v45 - v48;
                    if ( v17 )
                      v50.m128i_i8[0] = v40.m128i_i8[0] | 1;
                    v18 = IopGetSetObjectId(v7);
                    v16 = v18;
                    if ( v18 == -1073741635 || v18 == -1073741771 )
                    {
                      v16 = IopGetSetObjectId(v7);
                      if ( v16 >= 0 )
                        v16 = IopGetSetObjectId(v7);
                    }
                    if ( v16 >= 0 )
                    {
                      v19 = 1;
                      v26 = 1;
                      v20 = v44 - v47;
                      if ( v44 == v47 )
                        v20 = v45 - v48;
                      if ( !v20 )
                      {
LABEL_35:
                        if ( v16 >= 0 )
                          goto LABEL_79;
                        v21 = 0;
                        if ( v19 )
                          v21 = IopGetSetObjectId(v7);
                        if ( v21 < 0 )
                          goto LABEL_79;
LABEL_69:
                        IopGetSetObjectId(a1);
                        goto LABEL_79;
                      }
                      IopMarshalIds(v54, v43, v53, PoolWithQuota_1);
                      v35 = v39;
                      v36 = v40;
                      v37 = Source;
                      v38 = v42;
                      v36.m128i_i8[0] = _mm_cvtsi128_si32(v40) & 0xFE;
                      v16 = IopSendMessageToTrackService(v46, &v35, v54);
                    }
                    v19 = v26;
                    goto LABEL_35;
                  }
LABEL_78:
                  v16 = -1072103335;
                  goto LABEL_79;
                }
              }
LABEL_38:
              v16 = 0;
              goto LABEL_79;
            }
            if ( (int)IopGetSetObjectId(v6) < 0 || RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
              goto LABEL_38;
            if ( IoGetTransactionParameterBlock(v6) || *(_QWORD *)PoolWithQuota_1 && IoGetTransactionParameterBlock(v7) )
              goto LABEL_78;
            VolumeId = IopGetSetObjectId(v7);
            goto LABEL_63;
          }
          v16 = IopGetVolumeId(v6);
          if ( v16 < 0 )
            goto LABEL_79;
          v16 = IopGetSetObjectId(a1);
          if ( v16 < 0 )
            goto LABEL_79;
          if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
            goto LABEL_38;
          if ( IoGetTransactionParameterBlock(a1) || *(_QWORD *)PoolWithQuota_1 && IoGetTransactionParameterBlock(v7) )
            goto LABEL_78;
          v35 = v39;
          v36 = v40;
          v37 = Source;
          v38 = v42;
          v36.m128i_i8[0] = _mm_cvtsi128_si32(v40) & 0xFE;
          v23 = IopSendMessageToTrackService(v46, &v35, PoolWithQuota_1);
        }
        v16 = v23;
        goto LABEL_79;
      }
      if ( a6 )
      {
        ExFreePoolWithTag(PoolWithQuota_1, 0);
        return ulMinuend;
      }
    }
  }
  return result;
}
