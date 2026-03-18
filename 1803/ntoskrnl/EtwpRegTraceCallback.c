/*
 * XREFs of EtwpRegTraceCallback @ 0x1407AC510
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmCallbackGetKeyObjectID @ 0x1406ED4C0 (CmCallbackGetKeyObjectID.c)
 *     EtwpCapturePreviousRegistryData @ 0x1407AC374 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1407AC478 (EtwpCaptureRegistryData.c)
 */

__int64 __fastcall EtwpRegTraceCallback(PVOID CallbackContext, PVOID Argument1, int *Argument2)
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
  PVOID v18; // rax
  unsigned int v19; // r8d
  __int64 v20; // rsi
  const void *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // r8d
  PVOID *v25; // rax
  __int128 v26; // xmm0
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  __int16 **v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  PVOID v36; // rax
  char v37; // bl
  unsigned int v38; // r9d
  void *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  ULONGLONG Buffer; // r8
  unsigned __int16 Length; // ax
  __int64 v46; // rcx
  __int64 v47; // rax
  ULONG v48; // r9d
  ULONGLONG v49; // rax
  unsigned __int16 v50; // r8
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
  bool v62; // sf
  int v64; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v65; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v66; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v68; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  int v70; // [rsp+60h] [rbp-A8h] BYREF
  int v71; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v72; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v73; // [rsp+70h] [rbp-98h] BYREF
  PCUNICODE_STRING ObjectName[4]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  PVOID *v76; // [rsp+A8h] [rbp-60h]
  __int64 v77; // [rsp+B0h] [rbp-58h]

  ObjectName[0] = 0LL;
  v4 = 0;
  v5 = 0LL;
  v70 = 0;
  v6 = 0LL;
  v68 = 0LL;
  LODWORD(v66) = 0;
  Object = 0LL;
  v7 = 0LL;
  v73 = 0LL;
  v8 = 0;
  P = 0LL;
  LODWORD(v72) = 0;
  v71 = 0;
  LOWORD(v64) = 0;
  v65 = 0;
  if ( (int)Argument1 > 22 )
  {
    v27 = (_DWORD)Argument1 - 23;
    if ( !v27 )
    {
      v20 = (__int64)Argument2;
      v35 = *((_QWORD *)Argument2 + 2);
      v4 = 113;
      v36 = *(PVOID *)Argument2;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_VALUE_KEY;
      v7 = *(__int16 **)(v35 + 8);
      Object = v36;
      LODWORD(v68) = *(_DWORD *)(v35 + 16);
      v19 = **(_DWORD **)(v35 + 40);
      LODWORD(v66) = v19;
      if ( (EtwpRegTraceOptions & 2) == 0 || Argument2[2] < 0 )
        goto LABEL_53;
      v21 = *(const void **)(v35 + 24);
LABEL_52:
      v8 = EtwpCaptureRegistryData(&P, v21, v19);
      LOWORD(v64) = v8;
LABEL_53:
      v37 = EtwpRegTraceOptions & 1;
      if ( (EtwpRegTraceOptions & 1) != 0 && Object )
      {
        CmCallbackGetKeyObjectID(&EtwpRegTraceCookie, Object, 0LL, ObjectName);
        v8 = v64;
        v6 = ObjectName[0];
      }
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&Object;
      if ( (v4 & 4) != 0 )
      {
        v77 = 8LL;
        v76 = &v73;
      }
      v38 = ((v4 & 4) != 0) + 2;
      v39 = &EtwpNull;
      *((_QWORD *)&UserData + 2 * (unsigned int)((v4 & 4) != 0) + 3) = 4LL;
      if ( v20 != 1 )
        v39 = (void *)(v20 + 8);
      *((_QWORD *)&UserData + 2 * (unsigned int)((v4 & 4) != 0) + 2) = v39;
      if ( (v4 & 8) != 0 )
      {
        v40 = 16LL * v38;
        v38 = ((v4 & 4) != 0) + 3;
        *(ULONGLONG *)((char *)&UserData.Ptr + v40) = (ULONGLONG)&v68 + 4;
        *(_QWORD *)((char *)&UserData.Size + v40) = 4LL;
      }
      if ( (v4 & 0x10) != 0 )
      {
        v41 = 16LL * v38++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v41) = (ULONGLONG)&v68;
        *(_QWORD *)((char *)&UserData.Size + v41) = 4LL;
      }
      if ( (v4 & 2) != 0 )
      {
        v42 = 16LL * v38++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v42) = (ULONGLONG)&v70;
        *(_QWORD *)((char *)&UserData.Size + v42) = 4LL;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v43 = 16LL * v38++;
        *(ULONGLONG *)((char *)&UserData.Ptr + v43) = (ULONGLONG)&v66;
        *(_QWORD *)((char *)&UserData.Size + v43) = 4LL;
      }
      if ( v37 == 1 )
      {
        if ( v6 )
        {
          Buffer = (ULONGLONG)v6->Buffer;
          if ( Buffer )
          {
            Length = v6->Length;
            if ( v6->Length )
            {
              v46 = 2LL * v38++;
              *(&UserData.Ptr + v46) = Buffer;
              *(&UserData.Size + 2 * v46) = Length;
              *(&UserData.Reserved + 2 * v46) = 0;
            }
          }
        }
      }
      v47 = 2LL * v38;
      v48 = v38 + 1;
      *(&UserData.Ptr + v47) = (ULONGLONG)&EtwpNull;
      *((_QWORD *)&UserData.Size + v47) = 2LL;
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
        *(&UserData.Ptr + v53) = (ULONGLONG)&v64;
        *((_QWORD *)&UserData.Size + v53) = 2LL;
        if ( v8 )
        {
          v54 = 2LL * v48++;
          *(&UserData.Ptr + v54) = (ULONGLONG)P;
          *(&UserData.Size + 2 * v54) = v8;
          *(&UserData.Reserved + 2 * v54) = 0;
        }
      }
      if ( v4 < 0 )
      {
        if ( v5 )
        {
          v55 = v5[2];
          LODWORD(v72) = v55;
          v71 = v5[1];
          v65 = 2048;
          if ( v55 <= 0x800 )
            v65 = v55;
        }
        v56 = 2LL * v48;
        *(&UserData.Ptr + v56) = (ULONGLONG)&v71;
        *((_QWORD *)&UserData.Size + v56) = 4LL;
        v57 = v48 + 1;
        v58 = v48 + 2;
        v57 *= 2LL;
        *(&UserData.Ptr + v57) = (ULONGLONG)&v72;
        *((_QWORD *)&UserData.Size + v57) = 4LL;
        v59 = v65;
        v60 = v58;
        v48 = v58 + 1;
        v60 *= 2LL;
        *(&UserData.Ptr + v60) = (ULONGLONG)&v65;
        *((_QWORD *)&UserData.Size + v60) = 2LL;
        if ( v59 )
        {
          v61 = 2LL * v48++;
          *(&UserData.Ptr + v61) = (ULONGLONG)(v5 + 3);
          *(&UserData.Size + 2 * v61) = v59;
          *(&UserData.Reserved + 2 * v61) = 0;
        }
      }
      if ( v20 == 1 || (v62 = *(int *)(v20 + 8) < 0, BYTE4(ObjectName[1]) = 1, !v62) )
        BYTE4(ObjectName[1]) = 2;
      EtwWrite(EtwpRegTraceHandle, (PCEVENT_DESCRIPTOR)&ObjectName[1], 0LL, v48, &UserData);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    v28 = v27 - 1;
    if ( !v28 )
    {
      v34 = *((_QWORD *)Argument2 + 2);
      v20 = (__int64)Argument2;
      v4 = 40;
      Object = *(PVOID *)Argument2;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_MULTIPLE_VALUE_KEY;
      HIDWORD(v68) = *(_DWORD *)(v34 + 16);
      LODWORD(v66) = **(_DWORD **)(v34 + 32);
      goto LABEL_53;
    }
    v29 = v28 - 3;
    if ( v29 )
    {
      v30 = v29 - 2;
      if ( v30 )
      {
        v31 = v30 - 2;
        if ( v31 )
        {
          v32 = v31 - 6;
          if ( v32 )
          {
            if ( v32 != 2 )
              return 0LL;
            v26 = ETW_REGISTRY_EVENT_SET_SECURITY_KEY;
          }
          else
          {
            v26 = ETW_REGISTRY_EVENT_QUERY_SECURITY_KEY;
          }
        }
        else
        {
          v26 = ETW_REGISTRY_EVENT_FLUSH_KEY;
        }
        v20 = (__int64)Argument2;
        goto LABEL_41;
      }
      v20 = (__int64)Argument2;
      v33 = (__int16 **)*((_QWORD *)Argument2 + 2);
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_OPEN_KEY;
      Object = v33[1];
      if ( Argument2[2] >= 0 )
        goto LABEL_46;
    }
    else
    {
      v20 = (__int64)Argument2;
      v33 = (__int16 **)*((_QWORD *)Argument2 + 2);
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_CREATE_KEY;
      Object = v33[1];
      if ( Argument2[2] >= 0 )
      {
        v70 = *(_DWORD *)v33[8];
LABEL_46:
        v73 = *(PVOID *)Argument2;
      }
    }
    v7 = *v33;
    v4 = 7;
    goto LABEL_53;
  }
  if ( (_DWORD)Argument1 == 22 )
  {
    v17 = *((_QWORD *)Argument2 + 2);
    Object = *(PVOID *)Argument2;
    *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_KEY;
    LODWORD(v68) = *(_DWORD *)(v17 + 8);
    v19 = **(_DWORD **)(v17 + 32);
    goto LABEL_18;
  }
  v9 = (_DWORD)Argument1 - 1;
  if ( v9 )
  {
    v10 = v9 - 13;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        v25 = (PVOID *)*((_QWORD *)Argument2 + 2);
        v20 = (__int64)Argument2;
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_DELETE_KEY;
        Object = *v25;
        goto LABEL_53;
      }
      v12 = v11 - 1;
      if ( !v12 )
      {
        v20 = (__int64)Argument2;
        v23 = *((_QWORD *)Argument2 + 2);
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_SET_VALUE_KEY;
        v7 = *(__int16 **)(v23 + 8);
        LODWORD(v68) = *(_DWORD *)(v23 + 20);
        Object = *(PVOID *)Argument2;
        v24 = *(_DWORD *)(v23 + 32);
        LODWORD(v66) = v24;
        if ( (EtwpRegTraceOptions & 2) != 0 && Argument2[2] >= 0 )
        {
          v8 = EtwpCaptureRegistryData(&P, *(const void **)(v23 + 24), v24);
          LOWORD(v64) = v8;
        }
        v5 = (_DWORD *)*((_QWORD *)Argument2 + 4);
        v4 = -15;
        goto LABEL_53;
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
          v17 = *((_QWORD *)Argument2 + 2);
          v4 = 120;
          v18 = *(PVOID *)Argument2;
          *(_OWORD *)&ObjectName[1] = v16;
          Object = v18;
          HIDWORD(v68) = *(_DWORD *)(v17 + 8);
          LODWORD(v68) = *(_DWORD *)(v17 + 12);
          v19 = **(_DWORD **)(v17 + 32);
          goto LABEL_13;
        }
        v17 = *((_QWORD *)Argument2 + 2);
        Object = *(PVOID *)Argument2;
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_SET_INFORMATION_KEY;
        LODWORD(v68) = *(_DWORD *)(v17 + 8);
        v19 = *(_DWORD *)(v17 + 24);
LABEL_18:
        v4 = 112;
LABEL_13:
        v20 = (__int64)Argument2;
        LODWORD(v66) = v19;
        if ( (EtwpRegTraceOptions & 2) == 0 || Argument2[2] < 0 )
          goto LABEL_53;
        v21 = *(const void **)(v17 + 16);
        goto LABEL_52;
      }
      v22 = *((_QWORD *)Argument2 + 2);
      v20 = (__int64)Argument2;
      v4 = 1;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_DELETE_VALUE_KEY;
      v7 = *(__int16 **)(v22 + 8);
LABEL_20:
      Object = *(PVOID *)Argument2;
      goto LABEL_53;
    }
    v26 = ETW_REGISTRY_EVENT_CLOSE_KEY;
    v20 = 1LL;
LABEL_41:
    *(_OWORD *)&ObjectName[1] = v26;
    goto LABEL_20;
  }
  if ( (EtwpRegTraceOptions & 4) != 0 )
    EtwpCapturePreviousRegistryData((__int64)Argument2);
  return 0LL;
}
