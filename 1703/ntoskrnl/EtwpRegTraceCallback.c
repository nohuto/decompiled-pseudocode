/*
 * XREFs of EtwpRegTraceCallback @ 0x14070E410
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmCallbackGetKeyObjectID @ 0x1406601B0 (CmCallbackGetKeyObjectID.c)
 *     EtwpCapturePreviousRegistryData @ 0x14070E270 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x14070E374 (EtwpCaptureRegistryData.c)
 */

__int64 __fastcall EtwpRegTraceCallback(PVOID CallbackContext, PVOID Argument1, __int64 Argument2)
{
  char v4; // di
  _DWORD *v5; // r15
  PCUNICODE_STRING v6; // r12
  __int16 *v7; // r14
  unsigned __int16 v8; // r10
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int128 v16; // xmm0
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rsi
  const void *v20; // rdx
  __int128 v21; // xmm0
  __int64 v22; // rdx
  unsigned int v23; // r8d
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  __int16 **v30; // rax
  __int64 v31; // rax
  _DWORD *v32; // rcx
  __int64 v33; // rdx
  unsigned int *v34; // rax
  char v35; // bl
  unsigned int v36; // r9d
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  ULONGLONG Buffer; // r8
  unsigned __int16 Length; // ax
  __int64 v46; // rcx
  __int64 v47; // rax
  ULONG v48; // r9d
  ULONGLONG v49; // r8
  unsigned __int16 v50; // ax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rax
  ULONG v58; // r9d
  unsigned __int16 v59; // dx
  __int64 v60; // rax
  __int64 v61; // rcx
  int v63; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v64; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v65; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B8h] BYREF
  PVOID EventDescriptor[3]; // [rsp+58h] [rbp-B0h] BYREF
  int v69; // [rsp+70h] [rbp-98h] BYREF
  int v70; // [rsp+74h] [rbp-94h] BYREF
  __int64 v71; // [rsp+78h] [rbp-90h] BYREF
  PVOID v72; // [rsp+80h] [rbp-88h] BYREF
  PCUNICODE_STRING ObjectName; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  PVOID *v75; // [rsp+A8h] [rbp-60h]
  __int64 v76; // [rsp+B0h] [rbp-58h]

  ObjectName = 0LL;
  v4 = 0;
  v5 = 0LL;
  v69 = 0;
  v6 = 0LL;
  v67 = 0LL;
  LODWORD(v65) = 0;
  Object = 0LL;
  v7 = 0LL;
  v72 = 0LL;
  v8 = 0;
  EventDescriptor[0] = 0LL;
  LODWORD(v71) = 0;
  v70 = 0;
  LOWORD(v63) = 0;
  v64 = 0;
  if ( (int)Argument1 > 22 )
  {
    v24 = (_DWORD)Argument1 - 23;
    if ( !v24 )
    {
      v19 = Argument2;
      v33 = *(_QWORD *)(Argument2 + 16);
      v4 = 113;
      v7 = *(__int16 **)(v33 + 8);
      Object = *(PVOID *)Argument2;
      LODWORD(v67) = *(_DWORD *)(v33 + 16);
      v34 = *(unsigned int **)(v33 + 40);
      *(_OWORD *)&EventDescriptor[1] = ETW_REGISTRY_EVENT_QUERY_VALUE_KEY;
      v18 = *v34;
      LODWORD(v65) = *v34;
      if ( (EtwpRegTraceOptions & 2) == 0 || *(int *)(Argument2 + 8) < 0 )
        goto LABEL_52;
      v20 = *(const void **)(v33 + 24);
LABEL_51:
      v8 = EtwpCaptureRegistryData(EventDescriptor, v20, v18);
      LOWORD(v63) = v8;
LABEL_52:
      v35 = EtwpRegTraceOptions & 1;
      if ( (EtwpRegTraceOptions & 1) != 0 && Object )
      {
        CmCallbackGetKeyObjectID(&EtwpRegTraceCookie, Object, 0LL, &ObjectName);
        v8 = v63;
        v6 = ObjectName;
      }
      UserData.Ptr = (ULONGLONG)&Object;
      v36 = 1;
      *(_QWORD *)&UserData.Size = 8LL;
      if ( (v4 & 4) != 0 )
      {
        v76 = 8LL;
        v75 = &v72;
        v36 = 2;
      }
      if ( v19 == 1 )
      {
        v38 = 16LL * v36;
        *(ULONGLONG *)((char *)&UserData.Ptr + v38) = (ULONGLONG)&EtwpNull;
        *(_QWORD *)((char *)&UserData.Size + v38) = 4LL;
      }
      else
      {
        v37 = 2LL * v36;
        *(&UserData.Ptr + v37) = v19 + 8;
        *((_QWORD *)&UserData.Size + v37) = 4LL;
      }
      v39 = v36 + 1;
      if ( (v4 & 8) != 0 )
      {
        v40 = 16LL * v39++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v40) = (ULONGLONG)&v67 + 4;
        *(_QWORD *)((char *)&UserData.Size + v40) = 4LL;
      }
      if ( (v4 & 0x10) != 0 )
      {
        v41 = 16LL * v39++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v41) = (ULONGLONG)&v67;
        *(_QWORD *)((char *)&UserData.Size + v41) = 4LL;
      }
      if ( (v4 & 2) != 0 )
      {
        v42 = 16LL * v39++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v42) = (ULONGLONG)&v69;
        *(_QWORD *)((char *)&UserData.Size + v42) = 4LL;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v43 = 16LL * v39++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v43) = (ULONGLONG)&v65;
        *(_QWORD *)((char *)&UserData.Size + v43) = 4LL;
      }
      if ( v35 == 1 )
      {
        if ( v6 )
        {
          Buffer = (ULONGLONG)v6->Buffer;
          if ( Buffer )
          {
            Length = v6->Length;
            if ( v6->Length )
            {
              v46 = 2LL * v39++;
              *(&UserData.Ptr + v46) = Buffer;
              *(&UserData.Size + 2 * v46) = Length;
              *(&UserData.Reserved + 2 * v46) = 0;
            }
          }
        }
      }
      v47 = 16LL * v39;
      v48 = v39 + 1;
      *(ULONGLONG *)((char *)&UserData.Ptr + v47) = (ULONGLONG)&EtwpNull;
      *(_QWORD *)((char *)&UserData.Size + v47) = 2LL;
      if ( (v4 & 1) != 0 )
      {
        if ( v7 )
        {
          v49 = *((_QWORD *)v7 + 1);
          if ( v49 )
          {
            v50 = *v7;
            if ( *v7 )
            {
              v51 = 2LL * v48++;
              *(&UserData.Ptr + v51) = v49;
              *(&UserData.Size + 2 * v51) = v50;
              *(&UserData.Reserved + 2 * v51) = 0;
            }
          }
        }
        v52 = 2LL * v48++;
        *(&UserData.Ptr + v52) = (ULONGLONG)&EtwpNull;
        *((_QWORD *)&UserData.Size + v52) = 2LL;
      }
      if ( (v4 & 0x40) != 0 )
      {
        v53 = 2LL * v48++;
        *(&UserData.Ptr + v53) = (ULONGLONG)&v63;
        *((_QWORD *)&UserData.Size + v53) = 2LL;
        if ( v8 )
        {
          v54 = 2LL * v48++;
          *((PVOID *)&UserData.Ptr + v54) = EventDescriptor[0];
          *(&UserData.Size + 2 * v54) = v8;
          *(&UserData.Reserved + 2 * v54) = 0;
        }
      }
      if ( v4 < 0 )
      {
        if ( v5 )
        {
          v55 = v5[2];
          LODWORD(v71) = v55;
          v70 = v5[1];
          v64 = 2048;
          if ( v55 <= 0x800 )
            v64 = v55;
        }
        v56 = 2LL * v48;
        *(&UserData.Ptr + v56) = (ULONGLONG)&v70;
        *((_QWORD *)&UserData.Size + v56) = 4LL;
        v57 = v48 + 1;
        v58 = v48 + 2;
        v57 *= 2LL;
        *(&UserData.Ptr + v57) = (ULONGLONG)&v71;
        *((_QWORD *)&UserData.Size + v57) = 4LL;
        v59 = v64;
        v60 = v58;
        v48 = v58 + 1;
        v60 *= 2LL;
        *(&UserData.Ptr + v60) = (ULONGLONG)&v64;
        *((_QWORD *)&UserData.Size + v60) = 2LL;
        if ( v59 )
        {
          v61 = 2LL * v48++;
          *(&UserData.Ptr + v61) = (ULONGLONG)(v5 + 3);
          *(&UserData.Size + 2 * v61) = v59;
          *(&UserData.Reserved + 2 * v61) = 0;
        }
      }
      if ( v19 == 1 || (BYTE4(EventDescriptor[1]) = 1, *(int *)(v19 + 8) >= 0) )
        BYTE4(EventDescriptor[1]) = 2;
      EtwWrite(EtwpRegTraceHandle, (PCEVENT_DESCRIPTOR)&EventDescriptor[1], 0LL, v48, &UserData);
      if ( EventDescriptor[0] )
        ExFreePoolWithTag(EventDescriptor[0], 0);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    v25 = v24 - 1;
    if ( !v25 )
    {
      v31 = *(_QWORD *)(Argument2 + 16);
      v19 = Argument2;
      v4 = 40;
      Object = *(PVOID *)Argument2;
      HIDWORD(v67) = *(_DWORD *)(v31 + 16);
      v32 = *(_DWORD **)(v31 + 32);
      *(_OWORD *)&EventDescriptor[1] = ETW_REGISTRY_EVENT_QUERY_MULTIPLE_VALUE_KEY;
      LODWORD(v65) = *v32;
      goto LABEL_52;
    }
    v26 = v25 - 3;
    if ( v26 )
    {
      v27 = v26 - 2;
      if ( v27 )
      {
        v28 = v27 - 2;
        if ( v28 )
        {
          v29 = v28 - 6;
          if ( v29 )
          {
            if ( v29 != 2 )
              return 0LL;
            v21 = ETW_REGISTRY_EVENT_SET_SECURITY_KEY;
          }
          else
          {
            v21 = ETW_REGISTRY_EVENT_QUERY_SECURITY_KEY;
          }
        }
        else
        {
          v21 = ETW_REGISTRY_EVENT_FLUSH_KEY;
        }
        goto LABEL_20;
      }
      v19 = Argument2;
      v30 = *(__int16 ***)(Argument2 + 16);
      Object = v30[1];
      *(_OWORD *)&EventDescriptor[1] = ETW_REGISTRY_EVENT_OPEN_KEY;
      if ( *(int *)(Argument2 + 8) >= 0 )
        goto LABEL_45;
    }
    else
    {
      v19 = Argument2;
      v30 = *(__int16 ***)(Argument2 + 16);
      Object = v30[1];
      *(_OWORD *)&EventDescriptor[1] = ETW_REGISTRY_EVENT_CREATE_KEY;
      if ( *(int *)(Argument2 + 8) >= 0 )
      {
        v69 = *(_DWORD *)v30[8];
LABEL_45:
        v72 = *(PVOID *)Argument2;
      }
    }
    v7 = *v30;
    v4 = 7;
    goto LABEL_52;
  }
  if ( (_DWORD)Argument1 == 22 )
  {
    v17 = *(_QWORD *)(Argument2 + 16);
    v16 = ETW_REGISTRY_EVENT_QUERY_KEY;
    Object = *(PVOID *)Argument2;
    LODWORD(v67) = *(_DWORD *)(v17 + 8);
    v18 = **(_DWORD **)(v17 + 32);
    goto LABEL_18;
  }
  v9 = (_DWORD)Argument1 - 1;
  if ( v9 )
  {
    v10 = v9 - 13;
    if ( !v10 )
    {
      v21 = ETW_REGISTRY_EVENT_CLOSE_KEY;
      v19 = 1LL;
      goto LABEL_21;
    }
    v11 = v10 - 1;
    if ( !v11 )
    {
      v19 = Argument2;
      Object = **(PVOID **)(Argument2 + 16);
      *(_OWORD *)&EventDescriptor[1] = ETW_REGISTRY_EVENT_DELETE_KEY;
      goto LABEL_52;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v19 = Argument2;
      v22 = *(_QWORD *)(Argument2 + 16);
      v7 = *(__int16 **)(v22 + 8);
      LODWORD(v67) = *(_DWORD *)(v22 + 20);
      Object = *(PVOID *)Argument2;
      v23 = *(_DWORD *)(v22 + 32);
      LODWORD(v65) = v23;
      *(_OWORD *)&EventDescriptor[1] = ETW_REGISTRY_EVENT_SET_VALUE_KEY;
      if ( (EtwpRegTraceOptions & 2) != 0 && *(int *)(Argument2 + 8) >= 0 )
      {
        v8 = EtwpCaptureRegistryData(EventDescriptor, *(const void **)(v22 + 24), v23);
        LOWORD(v63) = v8;
      }
      v5 = *(_DWORD **)(Argument2 + 32);
      v4 = -15;
      goto LABEL_52;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 2;
        if ( v15 )
        {
          if ( v15 != 1 )
            return 0LL;
          v16 = ETW_REGISTRY_EVENT_ENUMERATE_VALUE_KEY;
        }
        else
        {
          v16 = ETW_REGISTRY_EVENT_ENUMERATE_KEY;
        }
        v17 = *(_QWORD *)(Argument2 + 16);
        v4 = 120;
        Object = *(PVOID *)Argument2;
        HIDWORD(v67) = *(_DWORD *)(v17 + 8);
        LODWORD(v67) = *(_DWORD *)(v17 + 12);
        v18 = **(_DWORD **)(v17 + 32);
        goto LABEL_13;
      }
      v17 = *(_QWORD *)(Argument2 + 16);
      v16 = ETW_REGISTRY_EVENT_SET_INFORMATION_KEY;
      Object = *(PVOID *)Argument2;
      LODWORD(v67) = *(_DWORD *)(v17 + 8);
      v18 = *(_DWORD *)(v17 + 24);
LABEL_18:
      v4 = 112;
LABEL_13:
      v19 = Argument2;
      *(_OWORD *)&EventDescriptor[1] = v16;
      LODWORD(v65) = v18;
      if ( (EtwpRegTraceOptions & 2) == 0 || *(int *)(Argument2 + 8) < 0 )
        goto LABEL_52;
      v20 = *(const void **)(v17 + 16);
      goto LABEL_51;
    }
    v4 = 1;
    v21 = ETW_REGISTRY_EVENT_DELETE_VALUE_KEY;
    v7 = *(__int16 **)(*(_QWORD *)(Argument2 + 16) + 8LL);
LABEL_20:
    v19 = Argument2;
LABEL_21:
    Object = *(PVOID *)Argument2;
    *(_OWORD *)&EventDescriptor[1] = v21;
    goto LABEL_52;
  }
  if ( (EtwpRegTraceOptions & 4) != 0 )
    EtwpCapturePreviousRegistryData(Argument2);
  return 0LL;
}
