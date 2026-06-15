/*
 * XREFs of ?erase@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@0@Z @ 0x180099964
 * Callers:
 *     ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800CAA58 (-RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::vector<IAudioStreamInfo *>::erase(__int64 a1, _QWORD *a2, char *a3, char *a4)
{
  size_t v7; // rdi
  _QWORD *result; // rax

  if ( a3 != a4 )
  {
    v7 = *(_QWORD *)(a1 + 8) - (_QWORD)a4;
    memmove(a3, a4, v7);
    *(_QWORD *)(a1 + 8) = &a3[v7];
  }
  result = a2;
  *a2 = a3;
  return result;
}
