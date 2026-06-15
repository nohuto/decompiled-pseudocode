/*
 * XREFs of ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x140034084
 * Callers:
 *     ?ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x140034570 (-ThrowResultExceptionInternal@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x140031FC0 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ??$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z @ 0x14003204C (--$WriteResultString@PEBG@details@wil@@YAPEAEPEAE0PEBGPEAPEBG@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x140033DD4 (-ResultStringSize@details@wil@@YA_KPEBD@Z.c)
 *     ?ResultStringSize@details@wil@@YA_KPEBG@Z @ 0x140033DF8 (-ResultStringSize@details@wil@@YA_KPEBG@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x14003494C (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x140034A28 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall wil::StoredFailureInfo::SetFailureInfo(wil::StoredFailureInfo *this, const struct wil::FailureInfo *a2)
{
  __int64 v4; // rsi
  const unsigned __int16 *v5; // rdx
  __int64 v6; // rsi
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rsi
  const char *v9; // rdx
  __int64 v10; // rsi
  const char *v11; // rdx
  __int64 v12; // rsi
  const char *v13; // rdx
  __int64 v14; // rsi
  const char *v15; // rdx
  __int64 v16; // rsi
  const char *v17; // rdx
  __int64 v18; // rsi
  const char *v19; // rdx
  __int64 v20; // rsi
  const char *v21; // rdx
  unsigned __int64 v22; // rsi
  _QWORD *v23; // rdi
  _DWORD *v24; // rax
  const unsigned __int16 *v25; // rbx
  char *v26; // rcx
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax

  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)this + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)this + 6) = *((_OWORD *)a2 + 6);
  *((_OWORD *)this + 7) = *((_OWORD *)a2 + 7);
  *((_OWORD *)this + 8) = *((_OWORD *)a2 + 8);
  v4 = wil::details::ResultStringSize(*((wil::details **)a2 + 14), (const unsigned __int16 *)a2);
  v6 = wil::details::ResultStringSize(*((wil::details **)a2 + 11), v5) + v4;
  v8 = wil::details::ResultStringSize(*((wil::details **)a2 + 2), v7) + v6;
  v10 = wil::details::ResultStringSize(*((wil::details **)a2 + 13), v9) + v8;
  v12 = wil::details::ResultStringSize(*((wil::details **)a2 + 10), v11) + v10;
  v14 = wil::details::ResultStringSize(*((wil::details **)a2 + 8), v13) + v12;
  v16 = wil::details::ResultStringSize(*((wil::details **)a2 + 6), v15) + v14;
  v18 = wil::details::ResultStringSize(*((wil::details **)a2 + 5), v17) + v16;
  v20 = wil::details::ResultStringSize(*((wil::details **)a2 + 4), v19) + v18;
  v22 = wil::details::ResultStringSize(*((wil::details **)a2 + 15), v21) + v20;
  v23 = (_QWORD *)((char *)this + 144);
  v24 = (_DWORD *)*((_QWORD *)this + 18);
  v25 = 0LL;
  if ( !v24 || *v24 != 1 || *((_QWORD *)this + 19) < v22 )
  {
    wil::details::shared_buffer::reset((wil::StoredFailureInfo *)((char *)this + 144));
    wil::details::shared_buffer::create((wil::StoredFailureInfo *)((char *)this + 144), 0LL, v22);
  }
  if ( *v23 )
  {
    v26 = (char *)(*v23 + 4LL);
    if ( *v23 != -4LL )
      v25 = (const unsigned __int16 *)&v26[*((_QWORD *)this + 19)];
  }
  else
  {
    v26 = 0LL;
  }
  v27 = wil::details::WriteResultString<unsigned short const *>(
          v26,
          v25,
          *((wil::details **)a2 + 2),
          (_QWORD *)this + 2);
  v28 = wil::details::WriteResultString<char const *>(
          v27,
          (const char *)v25,
          *((wil::details **)a2 + 4),
          (_QWORD *)this + 4);
  v29 = wil::details::WriteResultString<char const *>(
          v28,
          (const char *)v25,
          *((wil::details **)a2 + 5),
          (_QWORD *)this + 5);
  v30 = wil::details::WriteResultString<char const *>(
          v29,
          (const char *)v25,
          *((wil::details **)a2 + 6),
          (_QWORD *)this + 6);
  v31 = wil::details::WriteResultString<char const *>(
          v30,
          (const char *)v25,
          *((wil::details **)a2 + 8),
          (_QWORD *)this + 8);
  v32 = wil::details::WriteResultString<char const *>(
          v31,
          (const char *)v25,
          *((wil::details **)a2 + 15),
          (_QWORD *)this + 15);
  v33 = wil::details::WriteResultString<char const *>(
          v32,
          (const char *)v25,
          *((wil::details **)a2 + 13),
          (_QWORD *)this + 13);
  v34 = wil::details::WriteResultString<unsigned short const *>(
          v33,
          v25,
          *((wil::details **)a2 + 14),
          (_QWORD *)this + 14);
  v35 = wil::details::WriteResultString<char const *>(
          v34,
          (const char *)v25,
          *((wil::details **)a2 + 10),
          (_QWORD *)this + 10);
  wil::details::WriteResultString<unsigned short const *>(v35, v25, *((wil::details **)a2 + 11), (_QWORD *)this + 11);
}
