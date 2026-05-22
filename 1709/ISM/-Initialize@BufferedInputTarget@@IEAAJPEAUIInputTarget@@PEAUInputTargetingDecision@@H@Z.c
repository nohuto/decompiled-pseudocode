/*
 * XREFs of ?Initialize@BufferedInputTarget@@IEAAJPEAUIInputTarget@@PEAUInputTargetingDecision@@H@Z @ 0x1800A4C1C
 * Callers:
 *     ?Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z @ 0x1800A4E04 (-Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BufferedInputTarget::Initialize(
        BufferedInputTarget *this,
        struct IInputTarget *a2,
        struct InputTargetingDecision *a3,
        int a4)
{
  unsigned int v4; // ebx
  BufferedInputTarget *v7; // rsi
  int v8; // r13d
  char v9; // al
  int v10; // r9d
  int v11; // eax
  _QWORD *v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rcx
  signed int v16; // ebp
  char *v17; // rdi
  __int64 v18; // rcx
  int v20; // [rsp+30h] [rbp-38h]
  int v21; // [rsp+88h] [rbp+20h]

  v4 = 0;
  v20 = a4 + 1;
  v7 = this;
  v8 = 0;
  if ( a4 + 1 > 6 )
  {
    v9 = 1;
    v4 = -2147467263;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v10 = 41;
      goto LABEL_4;
    }
    return v4;
  }
  v21 = 0;
  v11 = 0;
  if ( a4 <= 0 )
  {
LABEL_17:
    *((_DWORD *)v7 + 6 * v8 + 8) = 3;
    if ( *((struct IInputTarget **)v7 + 3 * v8 + 5) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IInputTarget *, struct IInputTarget *, struct InputTargetingDecision *))(*(_QWORD *)a2 + 8LL))(
          a2,
          a2,
          a3);
      v15 = *((_QWORD *)v7 + 3 * v8 + 5);
      *((_QWORD *)v7 + 3 * v8 + 5) = a2;
      if ( v15 )
        (*(void (__fastcall **)(__int64, struct IInputTarget *, struct InputTargetingDecision *))(*(_QWORD *)v15 + 16LL))(
          v15,
          a2,
          a3);
    }
    v16 = v8 + 1;
    *((_DWORD *)v7 + 6 * v8 + 12) = 0;
    if ( (unsigned int)(v8 + 1) < 6 )
    {
      v17 = (char *)v7 + 16 * v16 + 8 * v16 + 40;
      do
      {
        *((_DWORD *)v17 - 2) = 0;
        v18 = *(_QWORD *)v17;
        if ( *(_QWORD *)v17 )
        {
          *(_QWORD *)v17 = 0LL;
          (*(void (__fastcall **)(__int64, struct IInputTarget *, struct InputTargetingDecision *))(*(_QWORD *)v18 + 16LL))(
            v18,
            a2,
            a3);
        }
        *((_DWORD *)v17 + 2) = 0;
        ++v16;
        v17 += 24;
      }
      while ( (unsigned int)v16 < 6 );
    }
    *((_DWORD *)v7 + 44) = v20;
    return v4;
  }
  v12 = (_QWORD *)((char *)a3 + 8);
  v13 = this - a3;
  while ( *((_DWORD *)v12 - 2) == 1 )
  {
    *(_DWORD *)((char *)v12 + v13 + 24) = 3;
LABEL_11:
    v14 = *v12;
    if ( *(_QWORD *)((char *)v12 + v13 + 32) != *v12 )
    {
      if ( v14 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*v12);
        v11 = v21;
      }
      this = *(BufferedInputTarget **)((char *)v12 + v13 + 32);
      *(_QWORD *)((char *)v12 + v13 + 32) = v14;
      if ( this )
      {
        (*(void (__fastcall **)(BufferedInputTarget *))(*(_QWORD *)this + 16LL))(this);
        v11 = v21;
      }
    }
    ++v11;
    *(_DWORD *)((char *)v12 + v13 + 40) = 0;
    v12 += 3;
    v21 = v11;
    ++v8;
    if ( v11 >= a4 )
      goto LABEL_17;
  }
  if ( *((_DWORD *)v12 - 2) == 2 )
  {
    *(_DWORD *)((char *)v12 + v13 + 24) = 1;
    goto LABEL_11;
  }
  v9 = 87;
  v4 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v10 = 56;
LABEL_4:
    McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, v10, v9);
  }
  return v4;
}
