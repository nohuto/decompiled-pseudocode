/*
 * XREFs of ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C0101654
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0101358 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0026340 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bSupportsJPEG@XDCOBJ@@QEAAHXZ @ 0x1C002BE34 (-bSupportsJPEG@XDCOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall iCheckPassthroughImage(
        struct DCOBJ *this,
        struct PDEVOBJ *a2,
        int a3,
        __int64 a4,
        int *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v7; // r9d
  int v10; // edi
  unsigned int v11; // r14d
  unsigned int v12; // r10d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 XlateObject; // rax
  __int64 v19; // rbx
  __int64 v20; // [rsp+30h] [rbp-C8h]
  __int64 v21; // [rsp+38h] [rbp-C0h]
  __int64 v22; // [rsp+40h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-A8h]
  __int64 v24; // [rsp+60h] [rbp-98h] BYREF
  __int64 v25; // [rsp+68h] [rbp-90h] BYREF
  int v26; // [rsp+70h] [rbp-88h]
  int v27; // [rsp+78h] [rbp-80h]
  _QWORD v28[10]; // [rsp+80h] [rbp-78h] BYREF

  v7 = a3;
  v10 = 0;
  v11 = 0;
  v12 = 8;
  if ( a3 == 8 )
  {
    v27 = *a5;
    if ( v27 == 4119 )
    {
      if ( (unsigned int)XDCOBJ::bSupportsJPEG(this) )
        return *(_QWORD *)(*(_QWORD *)a2 + 3312LL) != 0LL;
    }
    else
    {
      v14 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 76LL) & 8) != 0 && *(_DWORD *)(v14 + 32) != 1 )
        return *(_QWORD *)(*(_QWORD *)a2 + 3312LL) != 0LL;
    }
    return v11;
  }
  if ( !*(_QWORD *)(*(_QWORD *)a2 + 3312LL) )
    return v11;
  if ( a6 < 4 || !a7 )
    return (unsigned int)-1;
  v15 = *(_QWORD *)this;
  v16 = *(_QWORD *)(*(_QWORD *)this + 512LL);
  if ( v16 )
    v23 = *(_QWORD *)(v16 + 128);
  else
    v23 = 0LL;
  v17 = *(_QWORD *)(v15 + 96);
  v26 = 0;
  v25 = 0LL;
  v24 = 0LL;
  if ( (v7 != 4119 || !(unsigned int)XDCOBJ::bSupportsJPEG(this))
    && (v7 != 4120 || ((unsigned __int8)*(_DWORD *)(v15 + 76) & (unsigned __int8)v12) == 0 || *(_DWORD *)(v15 + 32) == 1)
    || !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v25, v12, 0, 0LL, 0, 0, 0, 0x200u, 1) )
  {
    goto LABEL_23;
  }
  LODWORD(v22) = 0xFFFFFF;
  LODWORD(v21) = 0;
  LODWORD(v20) = 0;
  XlateObject = CreateXlateObject(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 112LL),
                  *(_DWORD *)(*(_QWORD *)this + 112LL),
                  v25,
                  v23,
                  v17,
                  v17,
                  v20,
                  v21,
                  v22,
                  0);
  v24 = XlateObject;
  if ( !XlateObject )
  {
    v11 = -1;
LABEL_23:
    XlateObject = 0LL;
  }
  if ( XlateObject )
  {
    v19 = *(_QWORD *)this;
    if ( ((*(_QWORD *)(*(_QWORD *)this + 512LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 512LL) != 0LL)) == 0 )
    {
      memset(v28, 0, sizeof(v28));
      v28[2] = *(_QWORD *)(v19 + 24);
      v28[3] = *(_QWORD *)(v19 + 48);
      WORD2(v28[9]) = 1;
    }
    LOBYTE(v10) = (unsigned int)_guard_dispatch_icall_fptr() != 0;
    v11 = 1;
    *a7 = v10;
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v24);
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v25);
  return v11;
}
