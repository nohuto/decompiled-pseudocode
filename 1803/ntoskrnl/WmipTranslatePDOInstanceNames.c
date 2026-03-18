/*
 * XREFs of WmipTranslatePDOInstanceNames @ 0x1405F4194
 * Callers:
 *     WmipForwardWmiIrp @ 0x14051BADC (WmipForwardWmiIrp.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     IoGetDeviceInstanceName @ 0x14015F4A0 (IoGetDeviceInstanceName.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 */

__int64 __fastcall WmipTranslatePDOInstanceNames(__int64 a1, char a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int v5; // r15d
  unsigned int v6; // r10d
  unsigned int v7; // ebp
  void *v8; // r12
  void *v9; // rsi
  char *v10; // r13
  unsigned int v11; // r14d
  unsigned int *v12; // rdi
  unsigned int v13; // eax
  void *v14; // r11
  unsigned int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // edx
  __int64 v20; // rdx
  int v21; // r12d
  unsigned __int64 v22; // r14
  unsigned int v23; // ecx
  unsigned int v24; // ebx
  _DWORD *v25; // rdi
  _WORD *v26; // r14
  wchar_t *Buffer; // rdx
  wchar_t *v28; // rdx
  __int64 result; // rax
  __int64 v30; // rax
  unsigned int *v31; // rcx
  void *v32; // rax
  unsigned __int16 Length; // cx
  unsigned int v34; // r14d
  __int64 v35; // rbx
  char *v36; // r13
  char v37; // [rsp+20h] [rbp-88h]
  char v38; // [rsp+21h] [rbp-87h]
  int v39; // [rsp+24h] [rbp-84h]
  unsigned int v40; // [rsp+28h] [rbp-80h]
  unsigned int v41; // [rsp+2Ch] [rbp-7Ch]
  unsigned int *v42; // [rsp+30h] [rbp-78h]
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-70h] BYREF
  void *v44; // [rsp+50h] [rbp-58h]

  v4 = *(unsigned int **)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v37 = 0;
  v42 = v4;
  v7 = (*(_DWORD *)(a1 + 56) + 1) & 0xFFFFFFFE;
  v39 = 0;
  v8 = 0LL;
  v38 = 1;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = v4;
  v40 = 0;
  do
  {
    v13 = 0;
    v41 = 0;
    if ( v12[4] )
    {
      v14 = 0LL;
      v44 = 0LL;
      while ( 1 )
      {
        v15 = v11;
        v16 = 8LL * v13;
        v17 = *(_QWORD *)&v12[v16 + 6] - WmipDataProviderPnpidGuid;
        if ( !v17 )
          v17 = *(_QWORD *)&v12[v16 + 8] - *((_QWORD *)&WmipDataProviderPnpidGuid + 1);
        if ( !v17 )
          goto LABEL_46;
        v18 = *(_QWORD *)&v12[v16 + 6] - WmipDataProviderPnPIdInstanceNamesGuid;
        if ( !v18 )
          v18 = *(_QWORD *)&v12[v16 + 8] - *((_QWORD *)&WmipDataProviderPnPIdInstanceNamesGuid + 1);
        if ( !v18 )
        {
LABEL_46:
          v38 = 0;
          if ( v9 )
          {
            ObfDereferenceObject(v9);
            v4 = v42;
            v9 = 0LL;
            v6 = v39;
            v15 = v11;
            v14 = v44;
          }
        }
        v19 = v12[v16 + 10];
        if ( (v19 & 0x20) == 0 )
          goto LABEL_11;
        if ( !v10 )
        {
          v30 = v4[1];
          v31 = v4;
          while ( (_DWORD)v30 )
          {
            v31 = (unsigned int *)((char *)v31 + v30);
            v30 = v31[1];
          }
          v10 = (char *)v31 + ((*v31 + 1) & 0xFFFFFFFE);
          v5 = a3 + (_DWORD)v4 - (_DWORD)v10;
        }
        v11 = v12[v16 + 11];
        v8 = *(void **)&v12[v16 + 12];
        if ( v15 >= v11 )
          v11 = v15;
        v40 = v11;
        if ( v8 == v14 )
        {
          v12[v16 + 12] = v6;
          v12[v16 + 10] = v19 | 8;
          goto LABEL_30;
        }
        if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v8, &UnicodeString) >= 0 )
          break;
LABEL_30:
        if ( a2 == 11 )
        {
          ObfDereferenceObject(v8);
          v40 = v11;
        }
LABEL_11:
        v4 = v42;
        v13 = v41 + 1;
        v6 = v39;
        v14 = v44;
        v41 = v13;
        if ( v13 >= v12[4] )
          goto LABEL_12;
      }
      if ( v38 )
      {
        if ( !v9 )
        {
          ObfReferenceObject(v8);
LABEL_39:
          v32 = v8;
          if ( v9 )
            v32 = v9;
          v9 = v32;
LABEL_42:
          Length = UnicodeString.Length;
          v34 = UnicodeString.Length + 4;
          v7 += v34;
          if ( v37 || v34 > v5 )
          {
            v37 = 1;
          }
          else
          {
            v12[v16 + 10] |= 8u;
            v44 = v8;
            v12[v16 + 12] = (_DWORD)v10 - (_DWORD)v12;
            v35 = Length;
            v39 = (_DWORD)v10 - (_DWORD)v12;
            *(_WORD *)v10 = Length + 2;
            v36 = v10 + 2;
            memmove(v36, UnicodeString.Buffer, Length);
            *(_WORD *)&v36[v35] = 95;
            v10 = &v36[v35 + 2];
            v5 -= v34;
          }
          RtlFreeAnsiString(&UnicodeString);
          v11 = v40;
          goto LABEL_30;
        }
        if ( v9 == v8 )
          goto LABEL_39;
      }
      v38 = 0;
      if ( v9 )
      {
        ObfDereferenceObject(v9);
        v9 = 0LL;
      }
      goto LABEL_42;
    }
LABEL_12:
    v20 = v12[1];
    v12 = (unsigned int *)((char *)v12 + v20);
  }
  while ( (_DWORD)v20 );
  if ( v38 && v9 )
  {
    if ( (int)IoGetDeviceInstanceName((ULONG_PTR)v8, &UnicodeString) >= 0 )
    {
      v21 = UnicodeString.Length;
      v22 = (unsigned __int64)(v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      v23 = (((_DWORD)v10 + 7) & 0xFFFFFFF8) - (_DWORD)v10;
      v24 = 2 * UnicodeString.Length + 96;
      v7 += v24 + v23;
      if ( v37 || v24 > v5 - v23 )
      {
        v37 = 1;
      }
      else if ( !*(_QWORD *)(a4 + 24) )
      {
        ObfReferenceObject(v9);
        *(_QWORD *)(a4 + 24) = v9;
        *(_DWORD *)(a4 + 52) = v40;
        v12[1] = v22 - (_DWORD)v12;
        v25 = (_DWORD *)((unsigned __int64)(v10 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v26 = (_WORD *)(v22 + 88);
        memset(v25, 0, 0x58uLL);
        Buffer = UnicodeString.Buffer;
        v25[4] = 2;
        *v25 = v24;
        v25[10] = 40;
        v25[11] = v40;
        v25[12] = 88;
        *(_OWORD *)(v25 + 6) = WmipDataProviderPnpidGuid;
        *v26 = v21 + 2;
        memmove(v26 + 1, Buffer, (unsigned __int16)v21);
        v28 = UnicodeString.Buffer;
        *(_WORD *)((char *)v26 + (unsigned __int16)v21 + 2) = 95;
        v25[18] = 4;
        v25[19] = 1;
        v25[20] = v21 + 92;
        *(_OWORD *)(v25 + 14) = WmipDataProviderPnPIdInstanceNamesGuid;
        *(_WORD *)((char *)v26 + (unsigned __int16)v21 + 4) = v21;
        memmove((char *)v26 + (unsigned __int16)v21 + 6, v28, (unsigned __int16)v21);
      }
      RtlFreeAnsiString(&UnicodeString);
    }
    ObfDereferenceObject(v9);
  }
  *v42 = v7;
  result = 4LL;
  if ( !v37 )
    result = v7;
  *(_QWORD *)(a1 + 56) = result;
  return result;
}
