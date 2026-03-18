/*
 * XREFs of Win32ExtractSessionPoolTagInfo @ 0x1C008AA70
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

NTSTATUS __fastcall Win32ExtractSessionPoolTagInfo(
        int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        unsigned __int64 *a7,
        __int64 a8,
        unsigned int a9)
{
  _QWORD *v9; // rax
  unsigned int *v10; // r13
  unsigned int v12; // esi
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  NTSTATUS result; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v17; // rbx
  NTSTATUS v18; // r14d
  __int64 v19; // rdi
  unsigned int v20; // r10d
  bool v21; // r11
  __int64 v22; // r8
  _QWORD *v23; // r13
  _QWORD *v24; // r14
  __int64 v25; // rcx
  __int64 v26; // rcx
  NTSTATUS v27; // [rsp+20h] [rbp-28h]
  int SystemInformation; // [rsp+28h] [rbp-20h] BYREF
  ULONG v29; // [rsp+2Ch] [rbp-1Ch]
  _DWORD *v30; // [rsp+30h] [rbp-18h]
  ULONG ReturnLength; // [rsp+90h] [rbp+48h] BYREF
  __int64 v32; // [rsp+98h] [rbp+50h]
  unsigned int v33; // [rsp+A0h] [rbp+58h]
  unsigned int *v34; // [rsp+A8h] [rbp+60h]

  v34 = a4;
  v33 = a3;
  v32 = a2;
  v9 = a5;
  SystemInformation = a1;
  *a4 = 0;
  v10 = a4;
  ReturnLength = 0;
  *v9 = 0LL;
  v29 = 0;
  v12 = 0;
  v30 = 0LL;
  v13 = 0;
  v14 = 0;
  *a6 = 0LL;
  *a7 = 0LL;
  result = ZwQuerySystemInformation(SystemSessionPoolTagInformation, &SystemInformation, 0x10u, &ReturnLength);
  if ( result == -1073741820 && ReturnLength )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, ReturnLength, 0x746C7355u);
    v17 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, ReturnLength);
      v29 = ReturnLength;
      v30 = v17;
      v27 = ZwQuerySystemInformation(SystemSessionPoolTagInformation, &SystemInformation, 0x10u, &ReturnLength);
      v18 = v27;
      if ( v27 >= 0 && v17[2] == a1 )
      {
        v19 = a8;
        v20 = a9;
        v21 = a8 && a9;
        v22 = 0LL;
        if ( v17[3] )
        {
          v23 = a5;
          v24 = a6;
          while ( 1 )
          {
            if ( *(_QWORD *)&v17[10 * v22 + 8] || *(_QWORD *)&v17[10 * v22 + 12] )
            {
              if ( !v21 )
                goto LABEL_25;
              v25 = 0LL;
              if ( v20 )
                break;
            }
LABEL_12:
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= v17[3] )
            {
              v18 = v27;
              v10 = v34;
              goto LABEL_14;
            }
          }
          while ( *(_DWORD *)(v19 + 4 * v25) != v17[10 * v22 + 4] )
          {
            v25 = (unsigned int)(v25 + 1);
            if ( (unsigned int)v25 >= v20 )
              goto LABEL_12;
          }
LABEL_25:
          if ( v12 < v33 )
          {
            v26 = v12++;
            *(_DWORD *)(v32 + 4 * v26) = v17[10 * v22 + 4];
          }
          *v23 += *(_QWORD *)&v17[10 * v22 + 8];
          *v24 += *(_QWORD *)&v17[10 * v22 + 12];
          v13 += v17[10 * v22 + 5] - v17[10 * v22 + 6];
          v14 += v17[10 * v22 + 10] - v17[10 * v22 + 11];
          goto LABEL_12;
        }
LABEL_14:
        *v10 = v12;
        *a7 = v13 | ((unsigned __int64)v14 << 32);
      }
      ExFreePoolWithTag(v17, 0x746C7355u);
      return v18;
    }
    else
    {
      return -1073741664;
    }
  }
  return result;
}
